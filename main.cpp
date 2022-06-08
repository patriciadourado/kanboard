#include "kanboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kanboard w;
    w.show();

    return a.exec();
}
