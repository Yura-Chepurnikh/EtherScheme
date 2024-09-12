#include "NotLogicGateSymbol.h"

NotLogicGateSymbol::NotLogicGateSymbol() : LogicGateSymbol(this) {
    QPainterPath gateCounter;

    gateCounter.moveTo(-5, 0);
    gateCounter.lineTo(0, 0);
    gateCounter.moveTo(45, 0);
    gateCounter.lineTo(0, 30);
    gateCounter.lineTo(0, -30);
    gateCounter.lineTo(45, 0);

    gateCounter.addEllipse(QPointF(45+3, 0), 3, 3);
    gateCounter.moveTo(51, 0);
    gateCounter.lineTo(56, 0);
    setPath(gateCounter);

    QColor color("#FF6A00");
    setPen(QPen(color, 2));
    setFlags(QGraphicsPathItem::ItemIsMovable | QGraphicsPathItem::ItemIsSelectable);
}
