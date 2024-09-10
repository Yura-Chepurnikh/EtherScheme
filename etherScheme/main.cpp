#include "mainwindow.h"

#include "../LogicGateSymbols/AndLogicGateSymbol.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QGraphicsView* view = new QGraphicsView();
    QGraphicsScene* scene = new QGraphicsScene();

    AndLogicGateSymbol* andGate = new AndLogicGateSymbol();

    scene->addItem(andGate);

    view->setScene(scene);
    view->setGeometry(0, 0, 800, 600);

    w.setCentralWidget(view);

    w.show();
    return a.exec();
}
