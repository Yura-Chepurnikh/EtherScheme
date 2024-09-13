#ifndef LOGICGATESYMBOL_H
#define LOGICGATESYMBOL_H

#include <QtWidgets/QGraphicsPathItem>
#include <QtWidgets/QGraphicsItem>
#include <QtGui/QPen>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QObject>
#include <QCursor>
#include <QPointF>

class LogicGateSymbol : public QGraphicsPathItem {
public:
    LogicGateSymbol(QGraphicsPathItem* parent);
    static int getGap() { return gridGap; }

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;

    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
    QPointF snapToGrid(const QPointF& pos, int gridGap);

private:
    static int gridGap;
};

#endif // LOGICGATESYMBOL_H
