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

    QGraphicsScene scene;

    AndLogicGateSymbol* andGate = new AndLogicGateSymbol();

    WorkSpace* workspace = new WorkSpace(&scene);

    scene.addItem(andGate);

    // QGraphicsView* view = new QGraphicsView();
    // QGraphicsScene* scene = new QGraphicsScene();
    // scene->addItem(andGate);

    // view->setScene(scene);
    //view->setGeometry(0, 0, 800, 600);

    // view->setStyleSheet({"background-color: #1F1F1F; border: none }"});

    workspace->setSceneRect(0, 0, 800, 600);
    //workspace->show();
    w.setCentralWidget(workspace);

    w.show();
    return a.exec();
}
