#include <QTest>
#include <opencv2/videoio.hpp>
#include "test_firstclass.hpp"

Test_Engine::Test_Engine( QObject * parent ) :
    QObject( parent ) {}

Test_Engine::~Test_Engine() {}

void    Test_Engine::engine()
{
    cv::VideoCapture emptyCapture;
    QCOMPARE( emptyCapture.isOpened(), false );

    //QString reportPath = QFINDTESTDATA( "default.qreport" );
    //qDebug() << endl << "Used report: " << reportPath;
    cv::VideoCapture capture( cv::CAP_ANY );
    QCOMPARE( capture.isOpened(), true );
}

void    Test_Engine::open() {
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

void    Test_Engine::close()
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

void    Test_Engine::isOpened()
{
    /*
    qtreports::Engine engine;

    QCOMPARE( engine.isOpened(), false );

    QString input = QFINDTESTDATA( "default.qreport" );
    QVERIFY2( engine.open( input ), engine.getLastError().toStdString().c_str() );

    QCOMPARE( engine.isOpened(), true );
    */
}

void    Test_Engine::getReport()
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

void    Test_Engine::getLastError()
{
    //qtreports::Engine engine;

    //QCOMPARE( engine.getLastError(), QString() );
}

