#ifndef BONDINGWIRE_H
#define BONDINGWIRE_H

#include "../LogicGateSymbols/LogicGateSymbol.h"
#include <QtWidgets/QGraphicsView>
#include <QtGui/QPen>
#include <QGraphicsPathItem>
#include <QtGui/QMouseEvent>
#include <QtGui/QPainterPath>

class BondingWire : public QGraphicsView {
    Q_OBJECT

public:
    BondingWire(QGraphicsScene* scene);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    QPointF snapToGrid(const QPointF &pos, int gridGap);

private:
    QPointF StartPoint;
    QGraphicsPathItem* PathItem;
};

#endif // BONDINGWIRE_H
