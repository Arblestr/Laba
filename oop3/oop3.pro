#-------------------------------------------------
#
# Project created by QtCreator 2016-06-04T14:45:17
#
#-------------------------------------------------

QT       += core gui

CONFIG += c++11

TARGET = oop3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Point.cpp \
    Vector.cpp \
    Line.cpp \
    Scaling.cpp \
    Rotation.cpp \
    Model.cpp \
    Paint.cpp \
    Moving.cpp \
    FoundationPaint.cpp \
    CreatorScaling.cpp \
    CreatorRotation.cpp \
    CreatorMoving.cpp \
    CreatorCameraRotation.cpp \
    Composite.cpp \
    FileLoader.cpp \
    Commander.cpp \
    CameraRotation.cpp \
    BaseScaling.cpp \
    BaseRotation.cpp \
    BaseMoving.cpp \
    ActionScale.cpp \
    ActionMove.cpp \
    ActionRotate.cpp \
    ActionCameraRotate.cpp \
    ActionLoad.cpp \
    Camera.cpp \
    MatrixWork.cpp

HEADERS  += mainwindow.h \
    BaseList.h \
    List.h \
    BaseError.h \
    ListError.h \
    BaseClass.h \
    Point.h \
    Line.h \
    BaseModel.h \
    Iterator.h \
    IteratorError.h \
    Composite.h \
    CompositeError.h \
    BaseLoader.h \
    FileLoader.h \
    FileLoaderError.h \
    ModelError.h \
    BaseChange.h \
    BaseRotation.h \
    Rotation.h \
    BaseMoving.h \
    Moving.h \
    Scaling.h \
    BaseScaling.h \
    BaseAction.h \
    ActionLoad.h \
    Commander.h \
    BaseCreator.h \
    CreatorRotation.h \
    BaseChangeError.h \
    ActionRotate.h \
    BaseCreatorError.h \
    CreatorScaling.h \
    CreatorMoving.h \
    ActionScale.h \
    ActionMove.h \
    Vector.h \
    VectorError.h \
    BaseCamera.h \
    Camera.h \
    ActionCameraRotate.h \
    BaseCameraChange.h \
    CreatorCameraRotation.h \
    CameraRotation.h \
    BaseElementChange.h \
    BaseElement.h \
    FoundationPaint.h \
    BaseFoundationPaint.h \
    BasePaint.h \
    Paint.h \
    PaintError.h \
    Model.h \
    ListFuncs.h \
    IteratorFuncs.h \
    ActionPaint.h \
    IteratorConst.h \
    IteratorConstFuncs.h \
    Matrix.h \
    MatrixFuncs.h \
    MatrixWork.h

FORMS    += mainwindow.ui
