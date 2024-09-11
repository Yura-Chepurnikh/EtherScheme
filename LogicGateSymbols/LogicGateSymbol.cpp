#include "LogicGateSymbol.h"

LogicGateSymbol::LogicGateSymbol(QGraphicsPathItem* parent = nullptr) : QGraphicsPathItem(parent) { }

void LogicGateSymbol::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(pen());
    painter->drawPath(path());
}

void LogicGateSymbol::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    setCursor(QCursor(Qt::ClosedHandCursor));
    QGraphicsPathItem::mousePressEvent(event);
}

void LogicGateSymbol::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    QGraphicsPathItem::mouseMoveEvent(event);
}

void LogicGateSymbol::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    setCursor(QCursor(Qt::ArrowCursor));
    QGraphicsPathItem::mouseReleaseEvent(event);
}
