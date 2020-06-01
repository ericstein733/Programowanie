#include "randomng.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    randomng w;
    w.show();
    return a.exec();
}
