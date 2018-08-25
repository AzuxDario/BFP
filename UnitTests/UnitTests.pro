QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \ 
    main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../BFP/release/ -lBFP
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../BFP/debug/ -lBFP
else:unix: LIBS += -L$$OUT_PWD/../BFP/ -lBFP

INCLUDEPATH += $$PWD/../BFP
DEPENDPATH += $$PWD/../BFP

include(ArthmeticTest/ArthmeticTest.pri)
include(ComparsionTest/ComparsionTest.pri)
include(ConversionTest/ConversionTest.pri)
include(CyclometricTest/CyclometricTest.pri)
include(ExponentialAndLogarithmicTest/ExponentialAndLogarithmicTest.pri)
include(InitializationTest/InitializationTest.pri)
include(Helpers/Helpers.pri)
