QT += core gui testlib

TARGET = tests
TEMPLATE = app
CONFIG += release c++11
#INCLUDEPATH += ../../qtreportslib
#LIBPATH     += ../../qtreportslib
#LIBS += -L../../qtreportslib
#LIBS   += -lqtreportslib

SOURCES += main.cpp \
    test_firstclass.cpp

HEADERS  += test_firstclass.hpp

QMAKE_CXXFLAGS += -std=c++11

message("Using spec: $$QMAKESPEC")
message("Compiler: $$QMAKE_CXX")
