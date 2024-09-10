#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsView* view = new QGraphicsView();
    QGraphicsScene* workspace = new QGraphicsScene();

    QMenu* fileMenu = menuBar()->addMenu(tr("&File"));

    QAction* newAction = new QAction(tr("&New"), this);
    QAction* openAction = new QAction(tr("&Open"), this);
    QAction* openRecentAction = new QAction(tr("&Open Recent"), this);
    QAction* closeAction = new QAction(tr("&Close"), this);
    QAction* saveAction = new QAction(tr("&Save"), this);
    QAction* saveAsAction = new QAction(tr("&Save As ..."), this);
    QAction* exportImageAction = new QAction(tr("&Export Image..."), this);
    QAction* printAction = new QAction(tr("&Print"), this);
    QAction* preferencesAction = new QAction(tr("&Preferences"), this);
    QAction* exitAction = new QAction(tr("&Exit"), this);

    fileMenu->addAction(newAction);
    fileMenu->addAction(openAction);
    fileMenu->addAction(openRecentAction);
    fileMenu->addAction(closeAction);
    fileMenu->addAction(saveAction);
    fileMenu->addAction(saveAsAction);
    fileMenu->addAction(exportImageAction);
    fileMenu->addAction(printAction);
    fileMenu->addAction(preferencesAction);
    fileMenu->addAction(exitAction);

    view->setScene(workspace);
    view->setGeometry(0, 0, 800, 600);
    menuBar()->setStyleSheet("background-color: #181818; color: white");
}

MainWindow::~MainWindow()
{
    delete ui;
}
