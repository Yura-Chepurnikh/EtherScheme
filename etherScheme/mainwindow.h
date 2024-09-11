#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QAction>
#include <QWheelEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void wheelEvent(QWheelEvent* event) override;

private:
    Ui::MainWindow *ui;
    QGraphicsView* view;
    QGraphicsScene* workspace;
};
#endif // MAINWINDOW_H
