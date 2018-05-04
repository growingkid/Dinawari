#include "trax.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Trax w;
    w.show();

    return a.exec();
}
