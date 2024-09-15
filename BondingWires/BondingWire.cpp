#include "BondingWire.h"

BondingWire::BondingWire(QGraphicsScene* scene) : QGraphicsView(scene),
    PathItem(nullptr) {
    setRenderHint(QPainter::Antialiasing, true);
}

void BondingWire::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        StartPoint = mapToScene(event->pos());

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
        QPointF currentPoint = mapToScene(event->pos());

        int gap = LogicGateSymbol::getGap();

        // qreal dx = std::abs(currentPoint.x() - StartPoint.x());
        // qreal dy = std::abs(currentPoint.y() - StartPoint.y());

        // if (dx > dy)
        //     currentPoint.setY(StartPoint.y());
        // else if (dx < dy)
        //     currentPoint.setX(StartPoint.x());
        // else {
        //     currentPoint.setX(StartPoint.x());
        //     currentPoint.setY(StartPoint.y());
        //     qDebug() << "Yes";
        // }

        QPointF gridPoint = snapToGrid(currentPoint, gap);

        QPainterPath path = PathItem->path();
        path.lineTo(gridPoint);
        PathItem->setPath(path);
    }
}

void BondingWire::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        PathItem = nullptr;
    }
}

QPointF BondingWire::snapToGrid(const QPointF &pos, int gridGap) {
    qreal x = qRound(pos.x() / gridGap) * gridGap;
    qreal y = qRound(pos.y() / gridGap) * gridGap;
    return QPointF(x, y);
}
