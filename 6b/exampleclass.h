#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <QThread>
#include <QCoreApplication>

class ExampleClass : public QObject
{
    Q_OBJECT
public:
    explicit ExampleClass(QObject *parent = nullptr);

    void startToWait();

    void sayHelloSlot();

signals:
    void readyToSay();
};

#endif // EXAMPLECLASS_H
