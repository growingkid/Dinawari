#include "sth.h"

STH::STH(QObject *parent):
    QThread(parent)
{
}

STH::~STH()
{
    delete this;
}

void STH::letsbegin()
{
    connect(&Serial,SIGNAL(readyRead()),this,SLOT(read()));
    start();
}

void STH::returnparams()
{
    if(Serial.isOpen())
    {
        QString par,st;
        if(Serial.parity()==QSerialPort::NoParity)
            par="None";
        else if(Serial.parity()==QSerialPort::EvenParity)
            par="Even";
        else if(Serial.parity()==QSerialPort::OddParity)
            par="Odd";
        if(Serial.stopBits()==QSerialPort::OneStop)
            st="1";
        else if(Serial.stopBits()==QSerialPort::OneAndHalfStop)
            st="1.5";
        else if(Serial.stopBits()==QSerialPort::TwoStop)
            st="2";
        emit retparam(tr("%1 - %2 - %3 - %4 - %5").arg(Serial.portName()).arg(Serial.baudRate()).arg(Serial.dataBits()).arg(par).arg(st).toUtf8());
    }
    else if(!Serial.isOpen())
        emit retparam("Port is close!");
}

void STH::getserialparams(QString PortName, QSerialPort::BaudRate baud, QSerialPort::DataBits data, QSerialPort::Parity parity, QSerialPort::StopBits stopbit)
{
    Serial.setPortName(PortName);
    Serial.setBaudRate(baud);
    Serial.setDataBits(data);
    Serial.setParity(parity);
    Serial.setStopBits(stopbit);
    returnparams();
}

void STH::controlport(bool state)
{
    if(state)
        Serial.open(QIODevice::ReadWrite);
    else if(!state)
        Serial.close();
    returnparams();
}

bool STH::isportopen()
{
    return Serial.isOpen();
}

void STH::write(QByteArray data)
{
    if(Serial.isOpen())
    {
        Serial.write(data);
        Serial.waitForBytesWritten(-1);
        txc+=data.size();
    }
}

void STH::read()
{
    temp=Serial.readAll();
    rxc+=temp.size();
    emit sendserialdata(temp);
}
