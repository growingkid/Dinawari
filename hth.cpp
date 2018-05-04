#include "hth.h"

HTH::HTH(QObject *parent):
    QThread(parent)
{

}

HTH::~HTH()
{
    delete this;
}

void HTH::letsbegin()
{
    start();
}

void HTH::cnvrt_start(QByteArray data)
{
    emit cnvrt_finished(data.toHex());
}
