#include "./WorkSpace.h"
#include "../LogicGateSymbols/AndLogicGateSymbol.h"
#include "../LogicGateSymbols/NotLogicGateSymbol.h"

WorkSpace::WorkSpace(QWidget* parent) : QGraphicsView(parent)
{
    workspace = new QGraphicsScene();
    setScene(workspace);

    LogicGateSymbol* andGate = new AndLogicGateSymbol();

    LogicGateSymbol* notGate = new NotLogicGateSymbol();
    workspace->addItem(andGate);
    workspace->addItem(notGate);

    setGeometry(0, 0, 800, 600);
    setStyleSheet({"background-color: #1F1F1F; border: none }"});
    setRenderHint(QPainter::Antialiasing);
    setDragMode(QGraphicsView::ScrollHandDrag);
}

void WorkSpace::wheelEvent(QWheelEvent *event) {
    const double scaleFactor = 1.15;

    if (event->angleDelta().y() > 0) {
        scale(scaleFactor, scaleFactor);
    } else {
        scale(1.0 / scaleFactor, 1.0 / scaleFactor);
    }
}
