#ifndef COMPARSIONTEST_H
#define COMPARSIONTEST_H

#include <QObject>
#include <QTest>

class ComparsionTest : public QObject {
    Q_OBJECT
public:
    ComparsionTest();
private slots:
    void Empty();
};

#endif // COMPARSIONTEST_H
