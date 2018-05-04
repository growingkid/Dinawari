#ifndef STH_H
#define STH_H

#include <QThread>
#include <QSerialPort>

class STH : public QThread
{
    Q_OBJECT
public:
    explicit STH(QObject *parent = 0);
    ~STH();
    void letsbegin();
    void returnparams();
    void controlport(bool state);
    bool isportopen();

signals:
    void sendserialdata(QByteArray data);

    void retparam(QString data);

public slots:
    void write(QByteArray dt);

    void read();

    void getserialparams(QString PortName,
                         QSerialPort::BaudRate baud,
                         QSerialPort::DataBits data,
                         QSerialPort::Parity parity,
                         QSerialPort::StopBits stopbit);

public:
    unsigned long int rxc=0,txc=0;
private:
    QSerialPort Serial;
    QByteArray  temp;
};

#endif // STH_H
