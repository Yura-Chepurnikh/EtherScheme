#include "mainwindow.h"

#include "../LogicGateBackend/ANDGateLogic.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    ANDGateLogic* andGateLogic = new ANDGateLogic({1, 0, 0, 1}, -1);

    qDebug() << andGateLogic->CalculateOutput({1, 1, 1, 1});

    w.show();
    return a.exec();
}
