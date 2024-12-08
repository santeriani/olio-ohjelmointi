#include "ClassB.h"

class AssosiationA {
private:
    ClassB objectB;

public:
    AssosiationA(ClassB);
    string getBinfo();
    void setBinfo(string);
};
