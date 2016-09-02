#include <QGuiApplication>
#include <QTest>
#include "test_firstclass.hpp"

int main( int argc, char *argv[] ) {
    QGuiApplication a( argc, argv );
    int result = 0;
    result |= QTest::qExec( new Test_FirstClass, argc, argv );
     
    return result;
    //return a.exec();
}
