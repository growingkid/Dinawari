/********************************************************************************
** Form generated from reading UI file 'trax.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAX_H
#define UI_TRAX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Trax
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget_6;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QPushButton *Button_rx_clear;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Button_connection;
    QPushButton *Button_scan;
    QPushButton *Button_about;
    QPushButton *Button_quit;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox_3;
    QComboBox *comboBox_5;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLabel *label;
    QComboBox *comboBox_4;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget_8;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *Button_fs;
    QWidget *widget_3;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *widget_7;
    QGridLayout *gridLayout_8;
    QPushButton *Button_tx_clear;
    QCheckBox *checkBox_6;
    QLabel *label_7;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_7;
    QPushButton *Button_tx_browse;
    QPushButton *Button_tx_send;
    QPushButton *Button_tx_sendfile;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_tx_send_hex;
    QLineEdit *lineEdit;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QPlainTextEdit *plainTextEdit_4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Trax)
    {
        if (Trax->objectName().isEmpty())
            Trax->setObjectName(QString::fromUtf8("Trax"));
        Trax->resize(800, 480);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/Dinawari.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Trax->setWindowIcon(icon);
        Trax->setStyleSheet(QString::fromUtf8("QMainWindow#Trax\n"
"{\n"
"background-color: rgb(51, 51, 51);\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_connection\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 12px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_connection:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_connection:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"QPushButton#Button_connection:disabled\n"
"{\n"
"background-color: #C1C1C1;\n"
"color: #5E5E5E;\n"
"border: 2px solid #C1C1C1;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_scan\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 12px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_scan:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_scan:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"QPushButton#Button_scan:disabled\n"
"{\n"
"background-color: #C1C1C1;\n"
"color: #5E5E5E;\n"
"border: "
                        "2px solid #C1C1C1;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_about\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 12px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_about:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_about:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_quit\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 12px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_quit:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_quit:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_rx_clear\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 10px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_rx_clear:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_r"
                        "x_clear:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_tx_send\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 10px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_tx_send:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_tx_send:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_tx_send_hex\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 10px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_tx_send_hex:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_tx_send_hex:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"QPushButton#Button_tx_send_hex:disabled\n"
"{\n"
"background-color: #C1C1C1;\n"
"color: #5E5E5E;\n"
"border: 2px solid #C1C1C1;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_tx_browse\n"
"{\n"
"background-col"
                        "or: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 0px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_tx_browse:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_tx_browse:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_fs\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 7px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_fs:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_fs:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"/**************************************/\n"
"QPushButton#Button_tx_sendfile\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 10px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_tx_sendfile:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_tx_sendfile:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"/**************************************/\n"
"QPushB"
                        "utton#Button_tx_clear\n"
"{\n"
"background-color: #AEA79F;\n"
"color: #000000;\n"
"border-radius: 10px;\n"
"border: 2px solid #440046;\n"
"}\n"
"QPushButton#Button_tx_clear:hover\n"
"{\n"
"background-color: #C28A8A;\n"
"}\n"
"QPushButton#Button_tx_clear:pressed\n"
"{\n"
"background-color: #aeaeae;\n"
"}\n"
"/**************************************/\n"
"QCheckBox#checkBox\n"
"{\n"
"color:#EB421C;\n"
"}\n"
"/**************************************/\n"
"QCheckBox#checkBox_2\n"
"{\n"
"color:#EB421C;\n"
"}\n"
"/**************************************/\n"
"QCheckBox#checkBox_3\n"
"{\n"
"color:#EB421C;\n"
"}\n"
"/**************************************/\n"
"QCheckBox#checkBox_4\n"
"{\n"
"color:#EB421C;\n"
"}\n"
"/**************************************/\n"
"QCheckBox#checkBox_5\n"
"{\n"
"color:#EB421C;\n"
"}\n"
"/**************************************/\n"
"QCheckBox#checkBox_6\n"
"{\n"
"color:#EB421C;\n"
"}\n"
"/**************************************/\n"
"QCheckBox#checkBox_7\n"
"{\n"
"color:#EB421C;\n"
"}\n"
"/**********"
                        "****************************/\n"
"QComboBox#comboBox\n"
"{\n"
"color: rgb(212, 204, 210);\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"/**************************************/\n"
"QComboBox#comboBox_2\n"
"{\n"
"color: rgb(212, 204, 210);\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"/**************************************/\n"
"QComboBox#comboBox_3\n"
"{\n"
"color: rgb(212, 204, 210);\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"/**************************************/\n"
"QComboBox#comboBox_4\n"
"{\n"
"color: rgb(212, 204, 210);\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"/**************************************/\n"
"QComboBox#comboBox_5\n"
"{\n"
"color: rgb(212, 204, 210);\n"
"background-color: rgb(32, 32, 32);\n"
"}\n"
"/**************************************/\n"
"QPlainTextEdit#plainTextEdit\n"
"{\n"
"background-color: rgb(212, 204, 210);\n"
"}\n"
"/**************************************/\n"
"QPlainTextEdit#plainTextEdit_2\n"
"{\n"
"background-color: rgb(212, 204, 210);\n"
"}\n"
"/***********"
                        "***************************/\n"
"QPlainTextEdit#plainTextEdit_3\n"
"{\n"
"background-color: rgb(212, 204, 210);\n"
"}\n"
"/**************************************/\n"
"QPlainTextEdit#plainTextEdit_4\n"
"{\n"
"background-color: rgb(212, 204, 210);\n"
"}"));
        centralWidget = new QWidget(Trax);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 0);
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_5 = new QGridLayout(widget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 2);
        plainTextEdit_3 = new QPlainTextEdit(widget_2);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setMinimumSize(QSize(45, 0));
        plainTextEdit_3->setMaximumSize(QSize(45, 16777215));
        plainTextEdit_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit_3->setReadOnly(true);

        gridLayout_5->addWidget(plainTextEdit_3, 1, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(widget_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        gridLayout_5->addWidget(plainTextEdit, 1, 0, 1, 1);

        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_7 = new QGridLayout(widget_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        label_6->setFont(font);

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        Button_rx_clear = new QPushButton(widget_6);
        Button_rx_clear->setObjectName(QString::fromUtf8("Button_rx_clear"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_rx_clear->sizePolicy().hasHeightForWidth());
        Button_rx_clear->setSizePolicy(sizePolicy);
        Button_rx_clear->setMinimumSize(QSize(70, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Light"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        Button_rx_clear->setFont(font1);

        gridLayout_7->addWidget(Button_rx_clear, 0, 1, 1, 1);


        gridLayout_5->addWidget(widget_6, 0, 0, 1, 2);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        widget_4->setMinimumSize(QSize(105, 0));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Button_connection = new QPushButton(widget_4);
        Button_connection->setObjectName(QString::fromUtf8("Button_connection"));
        Button_connection->setMinimumSize(QSize(99, 24));
        Button_connection->setMaximumSize(QSize(99, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        Button_connection->setFont(font2);

        verticalLayout_2->addWidget(Button_connection);

        Button_scan = new QPushButton(widget_4);
        Button_scan->setObjectName(QString::fromUtf8("Button_scan"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font3.setPointSize(14);
        Button_scan->setFont(font3);

        verticalLayout_2->addWidget(Button_scan);

        Button_about = new QPushButton(widget_4);
        Button_about->setObjectName(QString::fromUtf8("Button_about"));
        Button_about->setFont(font3);

        verticalLayout_2->addWidget(Button_about);

        Button_quit = new QPushButton(widget_4);
        Button_quit->setObjectName(QString::fromUtf8("Button_quit"));
        Button_quit->setFont(font3);

        verticalLayout_2->addWidget(Button_quit);


        gridLayout_3->addWidget(widget_4, 0, 0, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy2);
        widget_5->setMaximumSize(QSize(16777215, 114));
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBox_3 = new QComboBox(widget_5);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_4->addWidget(comboBox_3, 1, 2, 1, 1);

        comboBox_5 = new QComboBox(widget_5);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_4->addWidget(comboBox_5, 1, 4, 1, 1);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font4.setPointSize(13);
        label_3->setFont(font4);

        gridLayout_4->addWidget(label_3, 0, 2, 1, 1);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font4);

        gridLayout_4->addWidget(label_5, 0, 4, 1, 1);

        comboBox_2 = new QComboBox(widget_5);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 1, 1, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font4);

        gridLayout_4->addWidget(label_4, 0, 3, 1, 1);

        label = new QLabel(widget_5);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Ubuntu Mono"));
        font5.setPointSize(13);
        font5.setBold(false);
        font5.setWeight(50);
        label->setFont(font5);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        comboBox_4 = new QComboBox(widget_5);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout_4->addWidget(comboBox_4, 1, 3, 1, 1);

        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font4);

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        comboBox = new QComboBox(widget_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_4->addWidget(comboBox, 1, 0, 1, 1);

        widget_8 = new QWidget(widget_5);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_2 = new QGridLayout(widget_8);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        checkBox = new QCheckBox(widget_8);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(widget_8);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(checkBox_2, 1, 0, 1, 1);

        Button_fs = new QPushButton(widget_8);
        Button_fs->setObjectName(QString::fromUtf8("Button_fs"));
        sizePolicy.setHeightForWidth(Button_fs->sizePolicy().hasHeightForWidth());
        Button_fs->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/fullscreen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Button_fs->setIcon(icon1);
        Button_fs->setIconSize(QSize(24, 24));
        Button_fs->setFlat(false);

        gridLayout_2->addWidget(Button_fs, 0, 1, 2, 2);


        gridLayout_4->addWidget(widget_8, 2, 0, 1, 5);


        gridLayout_3->addWidget(widget_5, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_6 = new QGridLayout(widget_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 2, 0, 0);
        plainTextEdit_2 = new QPlainTextEdit(widget_3);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));

        gridLayout_6->addWidget(plainTextEdit_2, 2, 0, 1, 1);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        gridLayout_8 = new QGridLayout(widget_7);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        Button_tx_clear = new QPushButton(widget_7);
        Button_tx_clear->setObjectName(QString::fromUtf8("Button_tx_clear"));
        sizePolicy.setHeightForWidth(Button_tx_clear->sizePolicy().hasHeightForWidth());
        Button_tx_clear->setSizePolicy(sizePolicy);
        Button_tx_clear->setMinimumSize(QSize(75, 0));
        Button_tx_clear->setFont(font1);

        gridLayout_8->addWidget(Button_tx_clear, 0, 14, 1, 1);

        checkBox_6 = new QCheckBox(widget_7);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        gridLayout_8->addWidget(checkBox_6, 0, 5, 1, 1);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        checkBox_5 = new QCheckBox(widget_7);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        gridLayout_8->addWidget(checkBox_5, 0, 4, 1, 1);

        checkBox_7 = new QCheckBox(widget_7);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        gridLayout_8->addWidget(checkBox_7, 0, 6, 1, 1);

        Button_tx_browse = new QPushButton(widget_7);
        Button_tx_browse->setObjectName(QString::fromUtf8("Button_tx_browse"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Ubuntu Light"));
        font6.setPointSize(12);
        Button_tx_browse->setFont(font6);

        gridLayout_8->addWidget(Button_tx_browse, 0, 10, 1, 1);

        Button_tx_send = new QPushButton(widget_7);
        Button_tx_send->setObjectName(QString::fromUtf8("Button_tx_send"));
        sizePolicy.setHeightForWidth(Button_tx_send->sizePolicy().hasHeightForWidth());
        Button_tx_send->setSizePolicy(sizePolicy);
        Button_tx_send->setMinimumSize(QSize(75, 0));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Ubuntu Light"));
        Button_tx_send->setFont(font7);

        gridLayout_8->addWidget(Button_tx_send, 0, 12, 1, 1);

        Button_tx_sendfile = new QPushButton(widget_7);
        Button_tx_sendfile->setObjectName(QString::fromUtf8("Button_tx_sendfile"));
        sizePolicy.setHeightForWidth(Button_tx_sendfile->sizePolicy().hasHeightForWidth());
        Button_tx_sendfile->setSizePolicy(sizePolicy);
        Button_tx_sendfile->setMinimumSize(QSize(75, 0));
        Button_tx_sendfile->setFont(font7);

        gridLayout_8->addWidget(Button_tx_sendfile, 0, 11, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 0, 1, 1, 1);

        Button_tx_send_hex = new QPushButton(widget_7);
        Button_tx_send_hex->setObjectName(QString::fromUtf8("Button_tx_send_hex"));
        sizePolicy.setHeightForWidth(Button_tx_send_hex->sizePolicy().hasHeightForWidth());
        Button_tx_send_hex->setSizePolicy(sizePolicy);
        Button_tx_send_hex->setMinimumSize(QSize(75, 0));
        Button_tx_send_hex->setFont(font1);

        gridLayout_8->addWidget(Button_tx_send_hex, 0, 13, 1, 1);

        lineEdit = new QLineEdit(widget_7);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_8->addWidget(lineEdit, 0, 9, 1, 1);

        checkBox_3 = new QCheckBox(widget_7);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout_8->addWidget(checkBox_3, 0, 7, 1, 1);

        checkBox_4 = new QCheckBox(widget_7);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout_8->addWidget(checkBox_4, 0, 8, 1, 1);


        gridLayout_6->addWidget(widget_7, 0, 0, 1, 2);

        plainTextEdit_4 = new QPlainTextEdit(widget_3);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setMinimumSize(QSize(45, 0));
        plainTextEdit_4->setMaximumSize(QSize(45, 16777215));
        plainTextEdit_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit_4->setReadOnly(false);

        gridLayout_6->addWidget(plainTextEdit_4, 2, 1, 1, 1);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);

        Trax->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Trax);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Trax->setStatusBar(statusBar);
        QWidget::setTabOrder(comboBox, comboBox_2);
        QWidget::setTabOrder(comboBox_2, comboBox_3);
        QWidget::setTabOrder(comboBox_3, comboBox_4);
        QWidget::setTabOrder(comboBox_4, comboBox_5);
        QWidget::setTabOrder(comboBox_5, Button_connection);
        QWidget::setTabOrder(Button_connection, Button_scan);
        QWidget::setTabOrder(Button_scan, Button_about);
        QWidget::setTabOrder(Button_about, Button_quit);
        QWidget::setTabOrder(Button_quit, Button_rx_clear);
        QWidget::setTabOrder(Button_rx_clear, Button_tx_sendfile);
        QWidget::setTabOrder(Button_tx_sendfile, Button_tx_send);
        QWidget::setTabOrder(Button_tx_send, Button_tx_clear);
        QWidget::setTabOrder(Button_tx_clear, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, plainTextEdit_3);
        QWidget::setTabOrder(plainTextEdit_3, plainTextEdit_2);
        QWidget::setTabOrder(plainTextEdit_2, plainTextEdit_4);

        retranslateUi(Trax);

        comboBox_3->setCurrentIndex(3);
        comboBox_2->setCurrentIndex(3);
        Button_fs->setDefault(false);


        QMetaObject::connectSlotsByName(Trax);
    } // setupUi

    void retranslateUi(QMainWindow *Trax)
    {
        Trax->setWindowTitle(QApplication::translate("Trax", "Dinawari", nullptr));
        label_6->setText(QApplication::translate("Trax", "<html><head/><body><p><span style=\" color:#10c955;\">Receive</span></p></body></html>", nullptr));
        Button_rx_clear->setText(QApplication::translate("Trax", " Clear ", nullptr));
        Button_connection->setText(QApplication::translate("Trax", " Connect ", nullptr));
        Button_scan->setText(QApplication::translate("Trax", " Rescan ", nullptr));
        Button_about->setText(QApplication::translate("Trax", " About ", nullptr));
        Button_quit->setText(QApplication::translate("Trax", " Exit ", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("Trax", "5 Bit", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("Trax", "6 Bit", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("Trax", "7 Bit", nullptr));
        comboBox_3->setItemText(3, QApplication::translate("Trax", "8 Bit", nullptr));

        comboBox_5->setItemText(0, QApplication::translate("Trax", "1 Bit", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("Trax", "1.5 Bit", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("Trax", "2 Bit", nullptr));

        label_3->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Data bit</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Stop bit</span></p></body></html>", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("Trax", "1200", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("Trax", "2400", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("Trax", "4800", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("Trax", "9600", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("Trax", "19200", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("Trax", "38400", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("Trax", "57600", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("Trax", "115200", nullptr));

        label_4->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Parity</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Port</span></p></body></html>", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("Trax", "None", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("Trax", "Even", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("Trax", "Odd", nullptr));

        label_2->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Baudrate</span></p></body></html>", nullptr));
        checkBox->setText(QApplication::translate("Trax", "Hex value", nullptr));
        checkBox_2->setText(QApplication::translate("Trax", "Autoscroll", nullptr));
#ifndef QT_NO_TOOLTIP
        Button_fs->setToolTip(QApplication::translate("Trax", "<html><head/><body><p align=\"center\">fullscreen(<span style=\" font-weight:600;\">F11</span>)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Button_fs->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Button_fs->setText(QString());
        Button_tx_clear->setText(QApplication::translate("Trax", " Clear ", nullptr));
        checkBox_6->setText(QApplication::translate("Trax", "CTRL+D", nullptr));
        label_7->setText(QApplication::translate("Trax", "<html><head/><body><p><span style=\" color:#10c955;\">Send</span></p></body></html>", nullptr));
        checkBox_5->setText(QApplication::translate("Trax", "CTRL+C", nullptr));
        checkBox_7->setText(QApplication::translate("Trax", "CTRL+Z", nullptr));
        Button_tx_browse->setText(QApplication::translate("Trax", "  ...  ", nullptr));
        Button_tx_send->setText(QApplication::translate("Trax", " Send ", nullptr));
        Button_tx_sendfile->setText(QApplication::translate("Trax", " Send file ", nullptr));
        Button_tx_send_hex->setText(QApplication::translate("Trax", "Send Hex", nullptr));
        checkBox_3->setText(QApplication::translate("Trax", "CR", nullptr));
        checkBox_4->setText(QApplication::translate("Trax", "LF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Trax: public Ui_Trax {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAX_H
