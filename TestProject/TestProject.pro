TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../BFP/release/ -lBFP
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../BFP/debug/ -lBFP
else:unix: LIBS += -L$$OUT_PWD/../BFP/ -lBFP

INCLUDEPATH += $$PWD/../BFP
DEPENDPATH += $$PWD/../BFP
