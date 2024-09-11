#include "./AndLogicGateSymbol.h"

AndLogicGateSymbol::AndLogicGateSymbol() : QGraphicsPathItem()
{
    QPainterPath gateCounter;

    gateCounter.moveTo(35, 0);
    gateCounter.lineTo(40, 0);
    gateCounter.arcTo(40, 0, 20, 20, 90, -180);
    gateCounter.lineTo(35, 20);
    gateCounter.closeSubpath();

    gateCounter.moveTo(35, 2);
    gateCounter.lineTo(25, 2);
    gateCounter.moveTo(35, 18);
    gateCounter.lineTo(25, 18);

    gateCounter.moveTo(70, 10);
    gateCounter.lineTo(60, 10);

    setPath(gateCounter);
    QColor col("#FF6A00");
    setPen(QPen(col, 2));

    setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
}

void AndLogicGateSymbol::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(pen());
    painter->drawPath(path());
}

void AndLogicGateSymbol::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    setCursor(Qt::ClosedHandCursor);
    QGraphicsPathItem::mouseMoveEvent(event);
}

void AndLogicGateSymbol::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    QGraphicsPathItem::mouseMoveEvent(event);
}

void AndLogicGateSymbol::mouseReleaseEvent(QGraphicsSceneMouseEvent *event) {
    setCursor(Qt::ArrowCursor);
    QGraphicsPathItem::mouseReleaseEvent(event);
}
