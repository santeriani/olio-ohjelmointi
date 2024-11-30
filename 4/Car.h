#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>
#include <iostream>
using namespace std;

class Car {
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(const string& mdl, const string& brnd);

    void setEngine();
    void setWheels();

    string getModel() const;
    void setModel(const string& mdl);

    string getBrand() const;
    void setBrand(const string& brnd);

    void printDetails() const;
};

#endif
