#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ActionCameraRotate.h"

#include "QPen"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene*  Scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(Scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //cComposite* Models;
    //FileLoader FL("Cube.txt");
    //FL.load_model(Models);
}
