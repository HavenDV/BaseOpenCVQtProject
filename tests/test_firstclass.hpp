#pragma once
#ifndef TEST_FIRSTCLASS_HPP
#define TEST_FIRSTCLASS_HPP
#include <QObject>

class Test_FirstClass : public QObject {
    Q_OBJECT

public:
    explicit Test_FirstClass( QObject * parent = Q_NULLPTR );
    ~Test_FirstClass();

private slots:
    void    engine();

    void    open();
    void    close();

    void    isOpened();
    void    getReport();
    void    getLastError();

};

#endif // TEST_FIRSTCLASS_HPP
