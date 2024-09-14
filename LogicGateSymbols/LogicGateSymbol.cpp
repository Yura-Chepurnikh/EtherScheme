#include "LogicGateSymbol.h"

LogicGateSymbol::LogicGateSymbol(QGraphicsPathItem* parent = nullptr) : QGraphicsPathItem(parent) { }

int LogicGateSymbol::gridGap = 5;

void LogicGateSymbol::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(pen());
    painter->drawPath(path());
}

void LogicGateSymbol::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    setCursor(QCursor(Qt::ArrowCursor));
    QGraphicsPathItem::mousePressEvent(event);
}

void LogicGateSymbol::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    setCursor(QCursor(Qt::CustomCursor));
    QGraphicsPathItem::mouseReleaseEvent(event);
}

void LogicGateSymbol::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    QPointF cursorPos = event->scenePos();
    int gap = LogicGateSymbol::getGap();

    QPointF bindingPos = snapToGrid(cursorPos, gap);

    setPos(bindingPos);

    QGraphicsPathItem::mousePressEvent(event);
}

QPointF LogicGateSymbol::snapToGrid(const QPointF &pos, int gridGap) {
    qreal x = qRound(pos.x() / gridGap) * gridGap;
    qreal y = qRound(pos.y() / gridGap) * gridGap;
    return QPointF(x, y);
}
