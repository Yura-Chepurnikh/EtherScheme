#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QGraphicsView>
#include <QWheelEvent>
#include <QWidget>

class WorkSpace : public QGraphicsView {

public:
    WorkSpace(QWidget* parent = nullptr);

protected:
    void wheelEvent(QWheelEvent* event) override;

public:
    QGraphicsScene* workspace;
};

#endif // WORKSPACE_H
