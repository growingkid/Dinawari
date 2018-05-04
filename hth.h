#ifndef HTH_H
#define HTH_H

#include <QThread>

class HTH : public QThread
{
    Q_OBJECT
public:
    explicit HTH(QObject *parent = 0);
    ~HTH();
    void letsbegin();

signals:
    void cnvrt_finished(QString data);

public slots:
    void cnvrt_start(QByteArray data);
};

#endif // HTH_H
