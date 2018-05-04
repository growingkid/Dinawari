#ifndef TRAX_H
#define TRAX_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QFileDialog>
#include <QMessageBox>
#include <QSerialPortInfo>
#include <QStandardPaths>
#include "QTimer"
#include "sth.h"
#include "hth.h"

namespace Ui {
class Trax;
class Ui_AboutWindow;
}

class Trax : public QMainWindow
{
    Q_OBJECT

public:
    explicit Trax(QWidget *parent = 0);
    ~Trax();
    void Initialize();
    void portscanner();
    void updateportstate();

protected:
    void mouseDoubleClickEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
signals:

    void write(QByteArray data);

    void sendserialparams(QString PortName,
                          QSerialPort::BaudRate baud,
                          QSerialPort::DataBits data,
                          QSerialPort::Parity parity,
                          QSerialPort::StopBits stopbit);

    void Received_txt(QByteArray data);

private slots:    
    void TOVF();

    void rcvdhexupdate(QString data);

    void getserialdata(QByteArray rcvd);

    void getparam(QString data);

    void update_status(QString datax);

    void on_Button_connection_clicked();

    void on_Button_scan_clicked();

    void on_Button_about_clicked();

    void on_Button_quit_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_Button_rx_clear_clicked();

    void on_Button_tx_clear_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_comboBox_5_currentIndexChanged(int index);

    void on_Button_tx_send_clicked();

    void on_Button_tx_send_hex_clicked();

    void on_Button_tx_browse_clicked();

    void on_Button_tx_sendfile_clicked();

    void on_Button_fs_clicked();

private:
    bool connection_state=false;
    QSerialPort::BaudRate baudrate=QSerialPort::Baud9600;
    QSerialPort::DataBits databit=QSerialPort::Data8;
    QSerialPort::Parity parity=QSerialPort::NoParity;
    QSerialPort::StopBits stopbit=QSerialPort::OneStop;

    Ui::Trax        *ui;
    STH             RTX;
    HTH             HCT;
    QTimer          *rcvtimeout;
    QByteArray      draft1;
    QFile           *filetosend;
    QFont           font_1;
    QString         params;

    unsigned long int rxcount=0,txcount=0;
};

#endif // TRAX_H
