#include "myclass.h"
#include <QCoreApplication>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    MyClass myObject;
    myObject.raiseMySignal();

    return a.exec();
}
