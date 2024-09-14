#include "mainwindow.h"

#include "../LogicGateSymbols/AndLogicGateSymbol.h"
#include "../BondingWires/BondingWire.h"
#include "WorkSpace.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QGraphicsScene scene;

    AndLogicGateSymbol* andGate = new AndLogicGateSymbol();
    WorkSpace* workspace = new WorkSpace(&scene);

    scene.addItem(andGate);

    workspace->setSceneRect(0, 0, 800, 600);
    w.setCentralWidget(workspace);

    w.show();
    return a.exec();
}
