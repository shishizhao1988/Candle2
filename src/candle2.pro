#-------------------------------------------------
#
# Project created by QtCreator 2014-05-23T17:51:21
#
#-------------------------------------------------

QT       = core gui opengl serialport widgets network

win32: {
    QT += winextras
    DEFINES += WINDOWS
    QMAKE_CFLAGS += -std=c11
    QMAKE_CXXFLAGS_DEBUG += -g3 -pg -std=c++14
    QMAKE_LFLAGS_DEBUG += -pg -lgmon
}

unix:!macx {
    DEFINES += UNIX #GL_GLEXT_PROTOTYPES
    QMAKE_LFLAGS += "-Wl,-rpath,\'\$$ORIGIN/libs\'"
}

contains(QT_CONFIG, opengles.) {
    warning("GL ES detected. VAO will be disabled.")
    DEFINES += GLES
    INSTALLS += target
    target.path = /home/pi
}

TARGET = PYClear
TEMPLATE = app
VERSION = 2.2.0
RC_ICONS += images/pycl.ico

DEFINES += sNan=\"65536\"
DEFINES += APP_VERSION=\\\"$$VERSION\\\"

TRANSLATIONS += translations/Candle2_en.ts \
                translations/Candle2_cn.ts

SOURCES += main.cpp\
        frmmain.cpp \
    frmsettings.cpp \
    frmabout.cpp \
    drawers/gcodedrawer.cpp \
    drawers/heightmapborderdrawer.cpp \
    drawers/heightmapgriddrawer.cpp \
    drawers/heightmapinterpolationdrawer.cpp \
    drawers/origindrawer.cpp \
    drawers/shaderdrawable.cpp \
    drawers/tooldrawer.cpp \
    iwindows_xinput_wrapper.cpp \
    parser/arcproperties.cpp \
    parser/gcodeparser.cpp \
    parser/gcodepreprocessorutils.cpp \
    parser/gcodeviewparse.cpp \
    parser/linesegment.cpp \
    parser/pointsegment.cpp \
    tables/gcodetablemodel.cpp \
    tables/heightmaptablemodel.cpp \
    widgets/colorpicker.cpp \
    widgets/combobox.cpp \
    widgets/groupbox.cpp \
    widgets/scrollarea.cpp \
    widgets/styledtoolbutton.cpp \
    widgets/widget.cpp \
    widgets/glwidget.cpp \
    widgets/slider.cpp \
    widgets/sliderbox.cpp \
    drawers/selectiondrawer.cpp \
    widgets/comboboxkey.cpp \
    protocol/grbl1_1.cpp \
    interface/SerialInterface.cpp \
    GrIP/CRC.c \
    frmmain_heightmap.cpp \
    frmmain_jogcontrol.cpp \
    frmmain_processresponse.cpp \
    frmmain_settings.cpp \
    frmmain_util.cpp \
    frmmain_event.cpp \
    GrIP/GrIP.cpp

HEADERS  += frmmain.h \
    frmsettings.h \
    frmabout.h \
    drawers/gcodedrawer.h \
    drawers/heightmapborderdrawer.h \
    drawers/heightmapgriddrawer.h \
    drawers/heightmapinterpolationdrawer.h \
    drawers/origindrawer.h \
    drawers/shaderdrawable.h \
    drawers/tooldrawer.h \
    iwindows_xinput_wrapper.h \
    parser/arcproperties.h \
    parser/gcodeparser.h \
    parser/gcodepreprocessorutils.h \
    parser/gcodeviewparse.h \
    parser/linesegment.h \
    parser/pointsegment.h \
    tables/gcodetablemodel.h \
    tables/heightmaptablemodel.h \
    utils/interpolation.h \
    utils/util.h \
    widgets/LightWidget.h \
    widgets/colorpicker.h \
    widgets/combobox.h \
    widgets/groupbox.h \
    widgets/scrollarea.h \
    widgets/styledtoolbutton.h \
    widgets/widget.h \
    widgets/glwidget.h \
    widgets/slider.h \
    widgets/sliderbox.h \
    drawers/selectiondrawer.h \
    widgets/comboboxkey.h \
    protocol/grbl1_1.h \
    interface/SerialInterface.h \
    GrIP/CRC.h \
    GrIP/GrIP.h \
    utils/safequeue.h

FORMS    += frmmain.ui \
    frmsettings.ui \
    frmabout.ui \
    widgets/sliderbox.ui

DEFINES += _USE_MATH_DEFINES

RESOURCES += \
    shaders.qrc \
    images.qrc

CONFIG += c++14


