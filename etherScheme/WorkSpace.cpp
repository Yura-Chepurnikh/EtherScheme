#include "./WorkSpace.h"
#include "../LogicGateSymbols/AndLogicGateSymbol.h"
#include "../LogicGateSymbols/NotLogicGateSymbol.h"

WorkSpace::WorkSpace(QGraphicsScene* scene) : QGraphicsView(scene), ShowGrid(true)
{
    // workspace = new QGraphicsScene();
    // setScene(workspace);

    // LogicGateSymbol* andGate = new AndLogicGateSymbol();

    // LogicGateSymbol* notGate = new NotLogicGateSymbol();
    // workspace->addItem(andGate);
    // workspace->addItem(notGate);

    // setGeometry(0, 0, 800, 600);
    setStyleSheet({"background-color: #1F1F1F; border: none }"});
    setRenderHint(QPainter::Antialiasing);
    setDragMode(QGraphicsView::ScrollHandDrag);
    drawGrid();
}

void WorkSpace::drawBackground(QPainter *painter, const QRectF &rect) {
    if (!ShowGrid)
        return;

    int gridGap = LogicGateSymbol::getGap();
    QColor col("F5F5F5");
    QPen pen(col, 0);

    painter->setPen(pen);

    for (int x = static_cast<int>(rect.left()) - static_cast<int>(rect.left()) % gridGap; x < rect.right(); x += gridGap) {
        painter->drawLine(x, rect.top(), x, rect.bottom());
    }

    for (int y = static_cast<int>(rect.top()) - static_cast<int>(rect.top()) % gridGap; y < rect.bottom(); y += gridGap) {
        painter->drawLine(rect.left(), y, rect.right(), y);
    }
}

void WorkSpace::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_G) {
        ShowGrid = !ShowGrid;
        scene()->update();
    }
    QGraphicsView::keyPressEvent(event);
}

void WorkSpace::drawGrid() {
    scene()->update();
}

void WorkSpace::wheelEvent(QWheelEvent *event) {
    const double scaleFactor = 1.15;

    if (event->angleDelta().y() > 0) {
        scale(scaleFactor, scaleFactor);
    } else {
        scale(1.0 / scaleFactor, 1.0 / scaleFactor);
    }
}
