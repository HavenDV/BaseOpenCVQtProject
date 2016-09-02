#include <QTest>
#include <opencv2/videoio.hpp>
#include "test_firstclass.hpp"

Test_FirstClass::Test_FirstClass( QObject * parent ) :
    QObject( parent ) {}

Test_FirstClass::~Test_FirstClass() {}

void    Test_FirstClass::engine()
{
    cv::VideoCapture emptyCapture;
    QCOMPARE( emptyCapture.isOpened(), false );

    //QString reportPath = QFINDTESTDATA( "default.qreport" );
    //qDebug() << endl << "Used report: " << reportPath;
    cv::VideoCapture capture( cv::CAP_ANY );
    QCOMPARE( capture.isOpened(), true );
}

void    Test_FirstClass::open() {
    /*
    qtreports::Engine engine;
    QCOMPARE( engine.open( "" ), false );

    QString reportPath = QFINDTESTDATA( "default.qreport" );
    //qDebug() << endl << "Used report: " << reportPath;
    QVERIFY2( engine.open( reportPath ), engine.getLastError().toStdString().c_str() );

    QVERIFY2( engine.open( reportPath ), engine.getLastError().toStdString().c_str() );

    QString erroredReportPath = QFINDTESTDATA( "errored.qrxml" );
    //qDebug() << endl << "Used report: " << erroredReportPath;
    QCOMPARE( engine.open( erroredReportPath ), false );
    */
}

void    Test_FirstClass::close()
{
    /*
    QString reportPath = QFINDTESTDATA( "default.qreport" );
    //qDebug() << endl << "Used report: " << reportPath;
    qtreports::Engine engine;
    QVERIFY2( engine.open( reportPath ), engine.getLastError().toStdString().c_str() );

    QCOMPARE( engine.isOpened(), true );
    engine.close();
    QCOMPARE( engine.isOpened(), false );
    */
}

void    Test_FirstClass::isOpened()
{
    /*
    qtreports::Engine engine;

    QCOMPARE( engine.isOpened(), false );

    QString input = QFINDTESTDATA( "default.qreport" );
    QVERIFY2( engine.open( input ), engine.getLastError().toStdString().c_str() );

    QCOMPARE( engine.isOpened(), true );
    */
}

void    Test_FirstClass::getReport()
{
    /*
    qtreports::Engine engine;

    QCOMPARE( engine.getReport(), qtreports::detail::ReportPtr() );

    QString input = QFINDTESTDATA( "default.qreport" );
    QVERIFY2( engine.open( input ), engine.getLastError().toStdString().c_str() );

    QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );
    QSqlDatabase db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName( "testDB" );

    QVERIFY2( db.open(), "Can't open test database 'testDB'" );
    QVERIFY2( engine.setConnection( db ), engine.getLastError().toStdString().c_str() );

    QVERIFY2( engine.getReport() != qtreports::detail::ReportPtr(), engine.getLastError().toStdString().c_str() );
    */
}

void    Test_FirstClass::getLastError()
{
    //qtreports::Engine engine;

    //QCOMPARE( engine.getLastError(), QString() );
}

