QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    assessmenu.cpp \
    basicdialog1.cpp \
    basicdialog2.cpp \
    main.cpp \
    mainmenu.cpp \
    testmenu.cpp \
    tutorialmenu.cpp

HEADERS += \
    assessmenu.h \
    basicdialog1.h \
    basicdialog2.h \
    mainmenu.h \
    testmenu.h \
    tutorialmenu.h

FORMS += \
    assessmenu.ui \
    basicdialog1.ui \
    basicdialog2.ui \
    mainmenu.ui \
    testmenu.ui \
    tutorialmenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
