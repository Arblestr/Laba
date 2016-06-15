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
    cComposite* Models = new cComposite;
    FileLoader FL("Cube.txt");
    FL.load_model(Models);

    FoundationPaint FP(Scene);
    Paint P(&FP);

    cIterator<BaseClass*> IterForModelList(Models->Objects);
    cModel* Model;
    Model = (cModel*)IterForModelList.get_value();

    cCamera* Camera;

    P.paint_model(*Model,*Camera);
}
