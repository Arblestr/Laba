#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ActionCameraRotate.h"

#include "QPen"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(Scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Commander* CommanderObject = new Commander();
    FoundationPaint* FP = new FoundationPaint(Scene);

    ActionLoad* ActionLoadObject = new ActionLoad("Cube.txt");
    CommanderObject->make(*ActionLoadObject,0);

    ActionPaint* ActionPaintObject = new ActionPaint(FP);
    CommanderObject->make(*ActionPaintObject,0);
}
