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

private:
    Ui::MainWindow *ui;

    QGraphicsScene* Scene;
};

#endif // MAINWINDOW_H
