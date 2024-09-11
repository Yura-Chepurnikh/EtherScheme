#ifndef LOGICGATESYMBOL_H
#define LOGICGATESYMBOL_H

#include <QtWidgets/QGraphicsPathItem>
#include <QtWidgets/QGraphicsItem>
#include <QtGui/QPen>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QObject>
#include <QCursor>

class LogicGateSymbol : public QGraphicsPathItem {
public:
    LogicGateSymbol(QGraphicsPathItem* parent);

protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;

    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
};

#endif // LOGICGATESYMBOL_H
