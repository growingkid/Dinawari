#include "trax.h"
#include "ui_trax.h"
#include <QDebug>

Trax::Trax(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Trax)
{
    Initialize();
}

Trax::~Trax()
{
    delete ui;
    destroy(true,true);
}

void Trax::Initialize()
{
    ui->setupUi(this);
    font_1.setFamily(QStringLiteral("Ubuntu Mono"));
    ui->Button_connection->setFont(font_1);

    ui->Button_connection->setCursor(Qt::PointingHandCursor);
    ui->Button_scan->setCursor(Qt::PointingHandCursor);
    ui->Button_about->setCursor(Qt::PointingHandCursor);
    ui->Button_quit->setCursor(Qt::PointingHandCursor);
    ui->Button_rx_clear->setCursor(Qt::PointingHandCursor);
    ui->Button_tx_clear->setCursor(Qt::PointingHandCursor);
    ui->Button_tx_send->setCursor(Qt::PointingHandCursor);
    ui->Button_tx_sendfile->setCursor(Qt::PointingHandCursor);
    ui->Button_tx_send_hex->setCursor(Qt::PointingHandCursor);
    ui->Button_tx_browse->setCursor(Qt::PointingHandCursor);
    ui->Button_fs->setCursor(Qt::PointingHandCursor);

    ui->plainTextEdit_3->setHidden(true);
    ui->plainTextEdit_4->setHidden(true);
    ui->Button_tx_send_hex->setDisabled(true);

    portscanner();
    updateportstate();
    RTX.letsbegin();
    HCT.letsbegin();
    connect(this,SIGNAL(sendserialparams(QString,QSerialPort::BaudRate,QSerialPort::DataBits,QSerialPort::Parity,QSerialPort::StopBits)),
            &RTX,SLOT(getserialparams(QString,QSerialPort::BaudRate,QSerialPort::DataBits,QSerialPort::Parity,QSerialPort::StopBits)));
    connect(&RTX,SIGNAL(retparam(QString)),this,SLOT(getparam(QString)));
    connect(&RTX,SIGNAL(sendserialdata(QByteArray)),this,SLOT(getserialdata(QByteArray)));
    connect(this,SIGNAL(write(QByteArray)),&RTX,SLOT(write(QByteArray)));

    connect(this,SIGNAL(Received_txt(QByteArray)),&HCT,SLOT(cnvrt_start(QByteArray)));
    connect(&HCT,SIGNAL(cnvrt_finished(QString)),this,SLOT(rcvdhexupdate(QString)));

    rcvtimeout = new QTimer;
    rcvtimeout->setSingleShot(true);
    connect(rcvtimeout,SIGNAL(timeout()),this,SLOT(TOVF()));

    filetosend = new QFile;
    RTX.returnparams();

}

void Trax::portscanner()
{
    unsigned char portcntr=0;
    ui->comboBox->clear();
    foreach (const QSerialPortInfo info, QSerialPortInfo::availablePorts())
    {
        ui->comboBox->addItem(info.portName());
        portcntr++;
    }
    ui->comboBox->setCurrentIndex(portcntr-1);
    if(ui->comboBox->currentIndex()< 0)
        ui->Button_connection->setDisabled(true);
    else
        ui->Button_connection->setDisabled(false);
}

void Trax::updateportstate()
{
    if(connection_state)
    {
        ui->Button_scan->setDisabled(true);
        font_1.setPointSize(12);
        ui->Button_connection->setFont(font_1);
        ui->Button_connection->setText(" Disconnect ");
        connection_state=false;
    }
    else if(!connection_state)
    {
        ui->Button_scan->setDisabled(false);
        portscanner();
        font_1.setPointSize(14);
        ui->Button_connection->setFont(font_1);
        ui->Button_connection->setText(" Connect ");
        connection_state=true;
    }
}

void Trax::mouseDoubleClickEvent(QMouseEvent *event)
{
    if((event->button()==Qt::LeftButton) &
            ((event->pos().x()>(0)) & (event->pos().x()<(ui->statusBar->width()))) &
            ((event->pos().y()>(ui->statusBar->y())) & (event->pos().y()<(ui->statusBar->y()+ui->statusBar->height()))))
    {
        RTX.rxc=0;
        RTX.txc=0;
        update_status(params);
    }
}

void Trax::keyPressEvent(QKeyEvent *event)
{
    if((event->key()==Qt::Key_F11) & (isFullScreen()))
        showNormal();
    else if((event->key()==Qt::Key_F11) & (!isFullScreen()))
        showFullScreen();

}

void Trax::TOVF()
{
    if(!ui->plainTextEdit_3->isHidden())
    {
        emit Received_txt(draft1);
        draft1.clear();
    }
    if(filetosend!=nullptr)
        filetosend->close();
}

void Trax::rcvdhexupdate(QString data)
{
    ui->plainTextEdit_3->insertPlainText(data);
    if(ui->checkBox_2->isChecked())
        ui->plainTextEdit_3->moveCursor(QTextCursor::End);
}

void Trax::getserialdata(QByteArray rcvd)
{
    ui->plainTextEdit->insertPlainText(rcvd);
    rcvtimeout->start(10);
    if(ui->checkBox->isChecked())
        draft1.append(rcvd);
    rxcount+=rcvd.size();
    if(ui->checkBox_2->isChecked())
        ui->plainTextEdit->moveCursor(QTextCursor::EndOfBlock);
    update_status(params);
}

void Trax::getparam(QString data)
{
    params=data;
    update_status(params);
}

void Trax::update_status(QString datax)
{
    ui->statusBar->setStyleSheet("color:#CA975B");
    statusBar()->showMessage(tr("%1         | rx:%2     tx:%3 |").arg(datax).arg(RTX.rxc).arg(RTX.txc));
}

void Trax::on_Button_connection_clicked()
{
    emit sendserialparams(ui->comboBox->currentText(), baudrate, databit, parity, stopbit);
    updateportstate();
    RTX.controlport(!connection_state);
}

void Trax::on_Button_scan_clicked()
{
    portscanner();
}

void Trax::on_Button_about_clicked()
{
    QMessageBox about;
    about.setWindowFlags(Qt::FramelessWindowHint);
    about.setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    about.setStandardButtons(QMessageBox::Close);
    about.setWindowTitle("About");
    about.setText("<html><head/><body><p align=center><img src=:/resources/Dinawari.png/></p><p align=center><span style= font-weight:600;>Dinawari</span></p><p align=center><a href=https://github.com/growingkid/Dinawari><span style= text-decoration: underline; color:#0000ff;>Dinawari</span></a> is a free serial port terminal written with Qt!</p><p align=center>Created by: <a href=https://github.com/growingkid><span style= text-decoration: underline; color:#0000ff;>growingkid</span></a></p><p align=center><br/></p><p align=center>This program comes with absolutely <span style= font-weight:600;>NO</span> warranty.</p><p align=center>See the <a href=https://github.com/growingkid/Dinawari/blob/master/LICENSE><span style= text-decoration: underline; color:#0000ff;>LICENSE(GNU General Public License v3.0)</span></a> for details.</p></body></html>");
    about.exec();
}

void Trax::on_Button_quit_clicked()
{
    close();
}

void Trax::on_checkBox_stateChanged(int arg1)
{
    if(arg1==Qt::Unchecked)
    {
        ui->plainTextEdit_3->setHidden(true);
        ui->plainTextEdit_4->setHidden(true);
        ui->Button_tx_send_hex->setDisabled(true);
    }
    else if(arg1==Qt::Checked)
    {
        ui->plainTextEdit_3->setHidden(false);
        ui->plainTextEdit_4->setHidden(false);
        ui->Button_tx_send_hex->setDisabled(false);
    }
}

void Trax::on_Button_rx_clear_clicked()
{
    ui->plainTextEdit->clear();
    ui->plainTextEdit_3->clear();
}

void Trax::on_Button_tx_clear_clicked()
{
    ui->plainTextEdit_2->clear();
    ui->plainTextEdit_4->clear();
}

void Trax::on_comboBox_2_currentIndexChanged(int index)
{
    if(index==0)
        baudrate=QSerialPort::Baud1200;
    else if(index==1)
        baudrate=QSerialPort::Baud2400;
    else if(index==2)
        baudrate=QSerialPort::Baud4800;
    else if(index==3)
        baudrate=QSerialPort::Baud9600;
    else if(index==4)
        baudrate=QSerialPort::Baud19200;
    else if(index==5)
        baudrate=QSerialPort::Baud38400;
    else if(index==6)
        baudrate=QSerialPort::Baud57600;
    else if(index==7)
        baudrate=QSerialPort::Baud115200;
    emit sendserialparams(ui->comboBox->currentText(), baudrate, databit, parity, stopbit);
}

void Trax::on_comboBox_3_currentIndexChanged(int index)
{
    if(index==0)
        databit=QSerialPort::Data5;
    else if(index==1)
        databit=QSerialPort::Data6;
    else if(index==2)
        databit=QSerialPort::Data7;
    else if(index==3)
        databit=QSerialPort::Data8;
    emit sendserialparams(ui->comboBox->currentText(), baudrate, databit, parity, stopbit);
}

void Trax::on_comboBox_4_currentIndexChanged(int index)
{
    if(index==0)
        parity=QSerialPort::NoParity;
    else if(index==1)
        parity=QSerialPort::EvenParity;
    else if(index==2)
        parity=QSerialPort::OddParity;
    emit sendserialparams(ui->comboBox->currentText(), baudrate, databit, parity, stopbit);
}

void Trax::on_comboBox_5_currentIndexChanged(int index)
{
    if(index==0)
        stopbit=QSerialPort::OneStop;
    else if(index==1)
        stopbit=QSerialPort::OneAndHalfStop;
    else if(index==2)
        stopbit=QSerialPort::TwoStop;
    emit sendserialparams(ui->comboBox->currentText(), baudrate, databit, parity, stopbit);
}

void Trax::on_Button_tx_send_clicked()
{
    emit write(ui->plainTextEdit_2->toPlainText().toUtf8());
    if(ui->checkBox_3->isChecked())
        emit write("\u000D");
    if(ui->checkBox_4->isChecked())
        emit write("\u000A");
    if(ui->checkBox_5->isChecked())
        emit write("\u0003");
    if(ui->checkBox_6->isChecked())
        emit write("\u0004");
    if(ui->checkBox_7->isChecked())
        emit write("\u001A");



    update_status(params);
}

void Trax::on_Button_tx_send_hex_clicked()
{
    emit write(QByteArray::fromHex(ui->plainTextEdit_4->toPlainText().toUtf8()));
    update_status(params);
}

void Trax::on_Button_tx_browse_clicked()
{
    QFileDialog fileDialog(this);
    fileDialog.setAcceptMode(QFileDialog::AcceptOpen);
    fileDialog.setWindowTitle(tr("Open File"));
    //fileDialog.setDirectory(tr("/home/%1").arg(qgetenv("USER").data()).toUtf8());
    if (fileDialog.exec() == QDialog::Accepted)
    {
        ui->lineEdit->clear();
        ui->lineEdit->insert(tr("%1").arg(fileDialog.selectedFiles().join(' ')).toUtf8());
    }
}

void Trax::on_Button_tx_sendfile_clicked()
{
    if(filetosend!=nullptr)
        delete filetosend;
    filetosend = new QFile(ui->lineEdit->text());
    filetosend->close();
    filetosend->open(QIODevice::ReadOnly);
    emit write(filetosend->readAll());
    update_status(params);
}

void Trax::on_Button_fs_clicked()
{
    if(!isFullScreen())
        showFullScreen();
    else
        showNormal();
}
