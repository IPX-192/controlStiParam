QT -= gui
QT += core widgets concurrent

TARGET = ControlStiParam

QMAKE_CXXFLAGS_RELEASE = $$QMAKE_CFLAGS_RELEASE_WITH_DEBUGINFO
QMAKE_LFLAGS_RELEASE = $$QMAKE_LFLAGS_RELEASE_WITH_DEBUGINFO


#生成文件名称
CONFIG(debug , debug|release){
    TARGET  = ControlStiParamd
    DESTDIR = $$PWD/../../../build/MainFrame/bin/x64/debug/plugins
}else{
    TARGET  = ControlStiParam
    DESTDIR = $$PWD/../../../build/MainFrame/bin/x64/release/plugins
}

TEMPLATE = app

DEFINES += CONTROLSTIPARAM_LIBRARY

DEFINES += QT_DEPRECATED_WARNINGS

DISTFILES += \
    controlstiparamplugin.json

#CONFIG += c++17



SOURCES += \
    # CControlStiParamComponent.cpp \
    # CControlStiParamPlugin.cpp \
    CClampTabWidget.cpp \
    CControlWnd.cpp \
    CDataMonitorWnd.cpp \
    CFileListWnd.cpp \
    CMembraneTestControlArea.cpp \
    # CMonitorStatusComponent.cpp \
    CMonitorWnd.cpp \
    CParamWnd.cpp \
    CStimualteWnd.cpp \
    Test.cpp

HEADERS += \
    # CControlStiParamComponent.h \
    # CControlStiParamPlugin.h \
    CClampTabWidget.h \
    CControlWnd.h \
    CDataMonitorWnd.h \
    CFileListWnd.h \
    CMembraneTestControlArea.h \
    # CMonitorStatusComponent.h \
    CMonitorWnd.h \
    CParamWnd.h \
    CStimualteWnd.h \
    ControlStiParam_global.h



win32{
    message("win")
    DEFINES += OS_WIN

    #包含库目录
    # INCLUDEPATH +=  $$PWD/../../../thirdparty/Logger
    # INCLUDEPATH +=  $$PWD/../../../thirdparty/Common
    # INCLUDEPATH +=  $$PWD/../../../thirdparty/Common/TableView

    CONFIG(debug, debug|release){
        contains(QT_ARCH, i386) {

            #配置三方库目录
            # LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lglog
            # LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lCommond
        } else {

            #配置三方库目录
            # LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lglog
            # LIBS += -L$$PWD/../../../thirdparty/lib/Debug -lCommond
        }
    } else {
        contains(QT_ARCH, i386) {

        } else {

            #配置三方库目录
            LIBS += -L$$PWD/../../../thirdparty/lib/release -lglog
            LIBS += -L$$PWD/../../../thirdparty/lib/release -lCommon
        }
    }
}

linux : !android{
    message("linux")

    #包含库目录
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Logger
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Common

    #库文件
    CONFIG(debug, debug|release){
        DESTDIR = $$PWD/../../../build/MainFrame/bin/$${QT_ARCH}/debug/plugins

        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lglog
        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lCommond

    } else {
        DESTDIR = $$PWD/../../../build/MainFrame/bin/$${QT_ARCH}/release/plugins

        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lglog
        LIBS   += -L$$PWD/../../../thirdparty/lib/Debug -lCommond
    }
}

android{
    message("android")

    #包含库目录
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Logger
    INCLUDEPATH +=  $$PWD/../../../thirdparty/Common

    #库文件
    CONFIG(debug, debug|release){
        DESTDIR = $$PWD/../../../build/MainFrame/bin/$${QT_ARCH}/debug/plugins

        LIBS   += -L$$PWD/../../../thirdparty/lib/debug -lglog_$${QT_ARCH}
        LIBS   += -L$$PWD/../../../thirdparty/lib/debug -lCommond_$${QT_ARCH}

    } else {
        DESTDIR = $$PWD/../../../build/MainFrame/bin/$${QT_ARCH}/release/plugins

        LIBS   += -L$$PWD/../../../thirdparty/lib/Release -lglog_$${QT_ARCH}
        LIBS   += -L$$PWD/../../../thirdparty/lib/Release -lCommon_$${QT_ARCH}
    }
}

FORMS += \
    CClampTabWidget.ui \
    CControlWnd.ui \
    CDataMonitorWnd.ui \
    CFileListWnd.ui \
    CMembraneTestControlArea.ui \
    CMonitorWnd.ui \
    CParamWnd.ui \
    CStimualteWnd.ui

RESOURCES += \
    res.qrc
