#include "mainwindow.h"

#include "../LogicGateSymbols/AndLogicGateSymbol.h"
#include "WorkSpace.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    WorkSpace* workspace = new WorkSpace();

    // QGraphicsView* view = new QGraphicsView();
    // QGraphicsScene* scene = new QGraphicsScene();

    // AndLogicGateSymbol* andGate = new AndLogicGateSymbol();

    // scene->addItem(andGate);

    // view->setScene(scene);
    // view->setGeometry(0, 0, 800, 600);

    // view->setStyleSheet({"background-color: #1F1F1F; border: none }"});
    w.setCentralWidget(workspace);

    w.show();
    return a.exec();
}
