#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_DeleteOnClose);
    setGeometry(100,100, 500, 600);
    widget = new QtCardoid(this);
    setCentralWidget(widget);
    menu_anlegen();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::menu_anlegen()
{
    fileMenu = menuBar()->addMenu(tr("&Datei"));

    QAction* quitAction = new QAction(tr("&Ende"), this);
    quitAction->setShortcut(tr("&Ctrl+Q"));
    quitAction->setStatusTip(tr("Programm beenden"));

    fileMenu->addAction(quitAction);

    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
}
