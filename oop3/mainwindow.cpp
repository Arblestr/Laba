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

    CommanderObject = new Commander();
    FP = new FoundationPaint(Scene);
    ActionPaintObject = new ActionPaint(FP);

    Center.set_X(0);
    Center.set_Y(0);
    Center.set_Z(0);

    Index = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionLoad* ActionLoadObject = new ActionLoad("Cube.txt");
    CommanderObject->make(*ActionLoadObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);

}

void MainWindow::on_pushButton_2_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionMoveY* ActionMoveYObject = new ActionMoveY(-10);
    CommanderObject->make(*ActionMoveYObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_5_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionMoveY* ActionMoveYObject = new ActionMoveY(10);
    CommanderObject->make(*ActionMoveYObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_4_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionMoveX* ActionMoveXObject = new ActionMoveX(10);
    CommanderObject->make(*ActionMoveXObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_3_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionMoveX* ActionMoveXObject = new ActionMoveX(-10);
    CommanderObject->make(*ActionMoveXObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_9_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionScaleXYZ* ActionScaleXYZObject = new ActionScaleXYZ(1.3);
    CommanderObject->make(*ActionScaleXYZObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_6_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionScaleX* ActionScaleXObject = new ActionScaleX(1.3);
    CommanderObject->make(*ActionScaleXObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_10_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionRotateZ* ActionRotateZObject = new ActionRotateZ(10,Center);
    CommanderObject->make(*ActionRotateZObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_11_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionRotateX* ActionRotateXObject = new ActionRotateX(10,Center);
    CommanderObject->make(*ActionRotateXObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_12_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionRotateY* ActionRotateYObject = new ActionRotateY(10,Center);
    CommanderObject->make(*ActionRotateYObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_13_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionRotateZ* ActionRotateZObject = new ActionRotateZ(-10,Center);
    CommanderObject->make(*ActionRotateZObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_14_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionRotateX* ActionRotateXObject = new ActionRotateX(-10,Center);
    CommanderObject->make(*ActionRotateXObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_15_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionRotateY* ActionRotateYObject = new ActionRotateY(-10,Center);
    CommanderObject->make(*ActionRotateYObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_7_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionScaleY* ActionScaleYObject = new ActionScaleY(1.3);
    CommanderObject->make(*ActionScaleYObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}

void MainWindow::on_pushButton_8_clicked()
{
    Index = ui->spinBox->text().toInt();
    ActionScaleZ* ActionScaleZObject = new ActionScaleZ(1.3);
    CommanderObject->make(*ActionScaleZObject,Index);

    CommanderObject->make(*ActionPaintObject,Index);
}
