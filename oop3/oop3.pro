#-------------------------------------------------
#
# Project created by QtCreator 2016-06-04T14:45:17
#
#-------------------------------------------------

QT       += core gui

TARGET = oop3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Point.cpp \
    Vector.cpp \
    Iterator.cpp \
    List.cpp \
    Line.cpp \
    Scaling.cpp \
    Rotation.cpp \
    Model.cpp

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
    ModelFuncs.h \
    Composite.h \
    CompositeFuncs.h \
    CompositeError.h \
    BaseLoader.h \
    FileLoader.h \
    FileLoaderFuncs.h \
    FileLoaderError.h \
    ModelError.h \
    BaseChange.h \
    BaseRotation.h \
    BaseRotationFuncs.h \
    Rotation.h \
    BaseMoving.h \
    BaseMovingFuncs.h \
    Moving.h \
    MovingFuncs.h \
    Scaling.h \
    BaseScaling.h \
    BaseScalingFuncs.h \
    BaseAction.h \
    ActionLoad.h \
    ActionLoadFuncs.h \
    CommanderFuncs.h \
    Commander.h \
    BaseCreator.h \
    CreatorRotation.h \
    CreatorRotationFuncs.h \
    BaseChangeError.h \
    ActionRotate.h \
    ActionRotateFuncs.h \
    BaseCreatorError.h \
    CreatorScaling.h \
    CreatorScalingFuncs.h \
    CreatorMoving.h \
    CreatorMovingFuncs.h \
    ActionScale.h \
    ActionMove.h \
    ActionMoveFuncs.h \
    ActionScaleFuncs.h \
    Vector.h \
    VectorError.h \
    BaseCamera.h \
    Camera.h \
    CameraFuncs.h \
    ActionCameraRotate.h \
    BaseCameraChange.h \
    ActionCameraRotateFuncs.h \
    CreatorCameraRotation.h \
    CameraRotation.h \
    BaseElementChange.h \
    BaseElement.h \
    CreatorCameraRotationFuncs.h \
    CameraRotationFuncs.h \
    FoundationPaint.h \
    FoundationPaintFuncs.h \
    BaseFoundationPaint.h \
    BasePaint.h \
    Paint.h \
    PaintFuncs.h \
    PaintError.h

FORMS    += mainwindow.ui
