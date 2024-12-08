#include "ClassB.h"

class AggregationA {
private:
    ClassB& refB;

public:
    AggregationA(ClassB&);
    string getBinfo();
    void setBinfo(string);
};
