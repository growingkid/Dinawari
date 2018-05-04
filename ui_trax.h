/********************************************************************************
** Form generated from reading UI file 'trax.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAX_H
#define UI_TRAX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
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
    QWidget *widget_2;
    QGridLayout *gridLayout_5;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget_6;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QPushButton *Button_rx_clear;
    QWidget *widget_3;
    QGridLayout *gridLayout_6;
    QPlainTextEdit *plainTextEdit_4;
    QPlainTextEdit *plainTextEdit_2;
    QWidget *widget_7;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QPushButton *Button_tx_sendfile;
    QPushButton *Button_tx_send_hex;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_tx_send;
    QPushButton *Button_tx_clear;
    QPushButton *Button_tx_browse;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Trax)
    {
        if (Trax->objectName().isEmpty())
            Trax->setObjectName(QStringLiteral("Trax"));
        Trax->resize(800, 480);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/Dinawari.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Trax->setWindowIcon(icon);
        Trax->setStyleSheet(QLatin1String("QMainWindow#Trax\n"
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
"QComboBox#comboBo"
                        "x_4\n"
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
"/**************************************/\n"
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
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 0);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Button_connection = new QPushButton(widget_4);
        Button_connection->setObjectName(QStringLiteral("Button_connection"));
        Button_connection->setMinimumSize(QSize(99, 24));
        Button_connection->setMaximumSize(QSize(99, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        Button_connection->setFont(font);

        verticalLayout_2->addWidget(Button_connection);

        Button_scan = new QPushButton(widget_4);
        Button_scan->setObjectName(QStringLiteral("Button_scan"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu Mono"));
        font1.setPointSize(14);
        Button_scan->setFont(font1);

        verticalLayout_2->addWidget(Button_scan);

        Button_about = new QPushButton(widget_4);
        Button_about->setObjectName(QStringLiteral("Button_about"));
        Button_about->setFont(font1);

        verticalLayout_2->addWidget(Button_about);

        Button_quit = new QPushButton(widget_4);
        Button_quit->setObjectName(QStringLiteral("Button_quit"));
        Button_quit->setFont(font1);

        verticalLayout_2->addWidget(Button_quit);


        gridLayout_3->addWidget(widget_4, 0, 0, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMaximumSize(QSize(16777215, 114));
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBox_3 = new QComboBox(widget_5);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout_4->addWidget(comboBox_3, 1, 2, 1, 1);

        comboBox_5 = new QComboBox(widget_5);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout_4->addWidget(comboBox_5, 1, 4, 1, 1);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu Mono"));
        font2.setPointSize(13);
        label_3->setFont(font2);

        gridLayout_4->addWidget(label_3, 0, 2, 1, 1);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        gridLayout_4->addWidget(label_5, 0, 4, 1, 1);

        comboBox_2 = new QComboBox(widget_5);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 1, 1, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        gridLayout_4->addWidget(label_4, 0, 3, 1, 1);

        label = new QLabel(widget_5);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu Mono"));
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        comboBox_4 = new QComboBox(widget_5);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout_4->addWidget(comboBox_4, 1, 3, 1, 1);

        label_2 = new QLabel(widget_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        comboBox = new QComboBox(widget_5);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_4->addWidget(comboBox, 1, 0, 1, 1);

        widget_8 = new QWidget(widget_5);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        gridLayout_2 = new QGridLayout(widget_8);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        checkBox = new QCheckBox(widget_8);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(widget_8);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        sizePolicy2.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(checkBox_2, 1, 0, 1, 1);

        Button_fs = new QPushButton(widget_8);
        Button_fs->setObjectName(QStringLiteral("Button_fs"));
        sizePolicy2.setHeightForWidth(Button_fs->sizePolicy().hasHeightForWidth());
        Button_fs->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/fullscreen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Button_fs->setIcon(icon1);
        Button_fs->setIconSize(QSize(24, 24));
        Button_fs->setFlat(false);

        gridLayout_2->addWidget(Button_fs, 0, 1, 2, 2);


        gridLayout_4->addWidget(widget_8, 2, 0, 1, 5);


        gridLayout_3->addWidget(widget_5, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_5 = new QGridLayout(widget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 2);
        plainTextEdit_3 = new QPlainTextEdit(widget_2);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setMinimumSize(QSize(50, 0));
        plainTextEdit_3->setMaximumSize(QSize(50, 16777215));
        plainTextEdit_3->setReadOnly(true);

        gridLayout_5->addWidget(plainTextEdit_3, 1, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(widget_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        gridLayout_5->addWidget(plainTextEdit, 1, 0, 1, 1);

        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        gridLayout_7 = new QGridLayout(widget_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font4;
        font4.setFamily(QStringLiteral("Ubuntu Mono"));
        font4.setPointSize(15);
        font4.setBold(false);
        font4.setWeight(50);
        label_6->setFont(font4);

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        Button_rx_clear = new QPushButton(widget_6);
        Button_rx_clear->setObjectName(QStringLiteral("Button_rx_clear"));
        sizePolicy2.setHeightForWidth(Button_rx_clear->sizePolicy().hasHeightForWidth());
        Button_rx_clear->setSizePolicy(sizePolicy2);
        Button_rx_clear->setMinimumSize(QSize(70, 0));
        QFont font5;
        font5.setFamily(QStringLiteral("Ubuntu Light"));
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setWeight(50);
        Button_rx_clear->setFont(font5);

        gridLayout_7->addWidget(Button_rx_clear, 0, 1, 1, 1);


        gridLayout_5->addWidget(widget_6, 0, 0, 1, 2);


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout_6 = new QGridLayout(widget_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 2, 0, 0);
        plainTextEdit_4 = new QPlainTextEdit(widget_3);
        plainTextEdit_4->setObjectName(QStringLiteral("plainTextEdit_4"));
        plainTextEdit_4->setMinimumSize(QSize(50, 0));
        plainTextEdit_4->setMaximumSize(QSize(50, 16777215));
        plainTextEdit_4->setReadOnly(false);

        gridLayout_6->addWidget(plainTextEdit_4, 1, 1, 1, 1);

        plainTextEdit_2 = new QPlainTextEdit(widget_3);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));

        gridLayout_6->addWidget(plainTextEdit_2, 1, 0, 1, 1);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        gridLayout_8 = new QGridLayout(widget_7);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font4);

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        Button_tx_sendfile = new QPushButton(widget_7);
        Button_tx_sendfile->setObjectName(QStringLiteral("Button_tx_sendfile"));
        sizePolicy2.setHeightForWidth(Button_tx_sendfile->sizePolicy().hasHeightForWidth());
        Button_tx_sendfile->setSizePolicy(sizePolicy2);
        Button_tx_sendfile->setMinimumSize(QSize(70, 0));
        QFont font6;
        font6.setFamily(QStringLiteral("Ubuntu Light"));
        Button_tx_sendfile->setFont(font6);

        gridLayout_8->addWidget(Button_tx_sendfile, 0, 4, 1, 1);

        Button_tx_send_hex = new QPushButton(widget_7);
        Button_tx_send_hex->setObjectName(QStringLiteral("Button_tx_send_hex"));
        sizePolicy2.setHeightForWidth(Button_tx_send_hex->sizePolicy().hasHeightForWidth());
        Button_tx_send_hex->setSizePolicy(sizePolicy2);
        Button_tx_send_hex->setMinimumSize(QSize(70, 0));
        Button_tx_send_hex->setFont(font5);

        gridLayout_8->addWidget(Button_tx_send_hex, 0, 6, 1, 1);

        lineEdit = new QLineEdit(widget_7);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_8->addWidget(lineEdit, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer, 0, 1, 1, 1);

        Button_tx_send = new QPushButton(widget_7);
        Button_tx_send->setObjectName(QStringLiteral("Button_tx_send"));
        sizePolicy2.setHeightForWidth(Button_tx_send->sizePolicy().hasHeightForWidth());
        Button_tx_send->setSizePolicy(sizePolicy2);
        Button_tx_send->setMinimumSize(QSize(70, 0));
        Button_tx_send->setFont(font6);

        gridLayout_8->addWidget(Button_tx_send, 0, 5, 1, 1);

        Button_tx_clear = new QPushButton(widget_7);
        Button_tx_clear->setObjectName(QStringLiteral("Button_tx_clear"));
        sizePolicy2.setHeightForWidth(Button_tx_clear->sizePolicy().hasHeightForWidth());
        Button_tx_clear->setSizePolicy(sizePolicy2);
        Button_tx_clear->setMinimumSize(QSize(70, 0));
        Button_tx_clear->setFont(font5);

        gridLayout_8->addWidget(Button_tx_clear, 0, 7, 1, 1);

        Button_tx_browse = new QPushButton(widget_7);
        Button_tx_browse->setObjectName(QStringLiteral("Button_tx_browse"));
        QFont font7;
        font7.setFamily(QStringLiteral("Ubuntu Light"));
        font7.setPointSize(12);
        Button_tx_browse->setFont(font7);

        gridLayout_8->addWidget(Button_tx_browse, 0, 3, 1, 1);


        gridLayout_6->addWidget(widget_7, 0, 0, 1, 2);


        gridLayout->addWidget(widget_3, 2, 0, 1, 1);

        Trax->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Trax);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        Trax->setWindowTitle(QApplication::translate("Trax", "Dinawari", Q_NULLPTR));
        Button_connection->setText(QApplication::translate("Trax", " Connect ", Q_NULLPTR));
        Button_scan->setText(QApplication::translate("Trax", " Rescan ", Q_NULLPTR));
        Button_about->setText(QApplication::translate("Trax", " About ", Q_NULLPTR));
        Button_quit->setText(QApplication::translate("Trax", " Exit ", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Trax", "5 Bit", Q_NULLPTR)
         << QApplication::translate("Trax", "6 Bit", Q_NULLPTR)
         << QApplication::translate("Trax", "7 Bit", Q_NULLPTR)
         << QApplication::translate("Trax", "8 Bit", Q_NULLPTR)
        );
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("Trax", "1 Bit", Q_NULLPTR)
         << QApplication::translate("Trax", "1.5 Bit", Q_NULLPTR)
         << QApplication::translate("Trax", "2 Bit", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Data bit</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Stop bit</span></p></body></html>", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Trax", "1200", Q_NULLPTR)
         << QApplication::translate("Trax", "2400", Q_NULLPTR)
         << QApplication::translate("Trax", "4800", Q_NULLPTR)
         << QApplication::translate("Trax", "9600", Q_NULLPTR)
         << QApplication::translate("Trax", "19200", Q_NULLPTR)
         << QApplication::translate("Trax", "38400", Q_NULLPTR)
         << QApplication::translate("Trax", "57600", Q_NULLPTR)
         << QApplication::translate("Trax", "115200", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Parity</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Port</span></p></body></html>", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("Trax", "None", Q_NULLPTR)
         << QApplication::translate("Trax", "Even", Q_NULLPTR)
         << QApplication::translate("Trax", "Odd", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Trax", "<html><head/><body><p align=\"center\"><span style=\" color:#15bac5;\">Baudrate</span></p></body></html>", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Trax", "Hex value", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Trax", "Autoscroll", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Button_fs->setToolTip(QApplication::translate("Trax", "<html><head/><body><p align=\"center\">fullscreen(<span style=\" font-weight:600;\">F11</span>)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Button_fs->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        Button_fs->setText(QString());
        label_6->setText(QApplication::translate("Trax", "<html><head/><body><p><span style=\" color:#10c955;\">Receive</span></p></body></html>", Q_NULLPTR));
        Button_rx_clear->setText(QApplication::translate("Trax", " Clear ", Q_NULLPTR));
        label_7->setText(QApplication::translate("Trax", "<html><head/><body><p><span style=\" color:#10c955;\">Send</span></p></body></html>", Q_NULLPTR));
        Button_tx_sendfile->setText(QApplication::translate("Trax", " Send file ", Q_NULLPTR));
        Button_tx_send_hex->setText(QApplication::translate("Trax", "Send Hex", Q_NULLPTR));
        Button_tx_send->setText(QApplication::translate("Trax", " Send ", Q_NULLPTR));
        Button_tx_clear->setText(QApplication::translate("Trax", " Clear ", Q_NULLPTR));
        Button_tx_browse->setText(QApplication::translate("Trax", "  ...  ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Trax: public Ui_Trax {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAX_H
