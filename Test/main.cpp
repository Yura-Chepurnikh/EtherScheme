#include "mainwindow.h"

#include "../BondingWires/BondingWire.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;
    scene.setSceneRect(0, 0, 800, 600);  // Устанавливаем размер сцены

    BondingWire view(&scene);
    view.setWindowTitle("Paint-like Brush Example");
    view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);  // Оптимизация обновления
    view.show();

    return a.exec();
}
