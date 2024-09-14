#ifndef BONDINGWIRE_H
#define BONDINGWIRE_H

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

private:
    QGraphicsPathItem* PathItem;
};

#endif // BONDINGWIRE_H
