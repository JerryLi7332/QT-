QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Texts.cpp \
    assessmenu.cpp \
    basicdialog1.cpp \
    basicdialog2.cpp \
    main.cpp \
    mainmenu.cpp \
    musicwidget.cpp \
    testmenu.cpp \
    tutorialmenu.cpp \
    tutorialwidget.cpp

HEADERS += \
    Texts.h \
    assessmenu.h \
    basicdialog1.h \
    basicdialog2.h \
    mainmenu.h \
    musicwidget.h \
    testmenu.h \
    tutorialmenu.h \
    tutorialwidget.h

FORMS += \
    assessmenu.ui \
    basicdialog1.ui \
    basicdialog2.ui \
    mainmenu.ui \
    musicwidget.ui \
    testmenu.ui \
    tutorialmenu.ui \
    tutorialwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    songs.qrc

DISTFILES += \
    music/蓝色多瑙河.m4a
