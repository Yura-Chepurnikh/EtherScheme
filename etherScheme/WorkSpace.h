#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QGraphicsView>
#include <QWheelEvent>
#include <QWidget>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QPainter>

class WorkSpace : public QGraphicsView {
public:
    WorkSpace(QGraphicsScene* parent);

protected:
    void keyPressEvent(QKeyEvent* event) override;
    void wheelEvent(QWheelEvent* event) override;
    void drawBackground(QPainter* painter, const QRectF &rect) override;

public:
    QGraphicsScene* workspace;

private:
    bool ShowGrid;
    void drawGrid();
};

#endif // WORKSPACE_H
