QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Display_Table.cpp \
    add_team.cpp \
    dijkstra_mlb.cpp \
    login.cpp \
    main.cpp \
    modifyinfo.cpp \
    souvenir.cpp \
    souvenir_container.cpp \
    stadium.cpp \
    stadium_container.cpp \
    widget.cpp

HEADERS += \
    Coordinates.h \
    add_team.h \
    container.h \
    dijkstra_mlb.h \
    files.h \
    login.h \
    modifyinfo.h \
    souvenir.h \
    stadium.h \
    stadium_container.h \
    widget.h

FORMS += \
    add_team.ui \
    login.ui \
    modifyinfo.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Major_League_Baseball_team_locations.png \
    README.md \
    large_vacation_time_title.png
