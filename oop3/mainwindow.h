#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "BaseCreator.h"
#include "FileLoader.h"
#include "FoundationPaint.h"
#include "Paint.h"
#include "Commander.h"
#include "ActionCameraRotate.h"
#include "ActionLoad.h"
#include "ActionMove.h"
#include "ActionPaint.h"
#include "ActionRotate.h"
#include "ActionScale.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsScene* Scene;
    Commander* CommanderObject;
    FoundationPaint* FP;
    ActionPaint* ActionPaintObject;

    cPoint Center;
    int Index;
};

#endif // MAINWINDOW_H
