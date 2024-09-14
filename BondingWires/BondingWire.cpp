#include "BondingWire.h"

BondingWire::BondingWire(QGraphicsScene* scene) : QGraphicsView(scene),
    PathItem(nullptr) {
    setRenderHint(QPainter::Antialiasing, true);
}

void BondingWire::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        QPainterPath path;
        path.moveTo(mapToScene(event->pos()));

        PathItem = new QGraphicsPathItem();
        PathItem->setPath(path);
        PathItem->setPen(QPen(Qt::black, 3));
        scene()->addItem(PathItem);
    }
}

void BondingWire::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton && PathItem) {
        QPainterPath path = PathItem->path();
        path.lineTo(mapToScene(event->pos()));
        PathItem->setPath(path);
    }
}

void BondingWire::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        PathItem == nullptr;
    }
}
