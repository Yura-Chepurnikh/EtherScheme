#ifndef ANDLOGICGATESYMBOL_H
#define ANDLOGICGATESYMBOL_H

#include "./LogicGateSymbol.h"
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QWidget>

class AndLogicGateSymbol : public QObject, public QGraphicsPathItem {
    Q_OBJECT

public:
    AndLogicGateSymbol();

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget* widget) override;

    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
};

#endif // ANDLOGICGATESYMBOL_H
