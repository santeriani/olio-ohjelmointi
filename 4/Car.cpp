#include "Car.h"

Car::Car() : model(""), brand("") {}

Car::Car(const string& mdl, const string& brnd) : model(mdl), brand(brnd) {}

void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1 = Wheel(17, "kesarengas");
    objWheel2 = Wheel(17, "kesarengas");
    objWheel3 = Wheel(17, "kesarengas");
    objWheel4 = Wheel(17, "kesarengas");
}

string Car::getModel() const {
    return model;
}

void Car::setModel(const string& mdl) {
    model = mdl;
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string& brnd) {
    brand = brnd;
}

void Car::printDetails() const {
    cout << "Auto : " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, " << objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
}
