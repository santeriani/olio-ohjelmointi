#include <iostream>
#include <string>
#include <memory>

using namespace std;

// Car-luokan määrittely
class Car {
private:
    string brand;     // Auton merkki
    string model;     // Auton malli
    int yearModel;    // Valmistusvuosi

public:
    Car() : brand(""), model(""), yearModel(0) {}


    void setBrand(const string& b) {
        brand = b;
    }

    void setModel(const string& m) {
        model = m;
    }

    void setYearModel(int y) {
        yearModel = y;
    }


    void printData() const {
        cout << "Merkki: " << brand << ", Malli: " << model << ", Vuosi: " << yearModel << endl;
    }
};


// Rectangle-luokka
class Rectangle {
private:
    double width;  // Leveys
    double height; // Korkeus

public:
    Rectangle() : width(0.0), height(0.0) {}

    void setWidth(double w) {
        if (w >= 0) width = w;
        else cout << "Leveys ei voi olla negatiivinen!" << endl;
    }

    void setHeight(double h) {
        if (h >= 0) height = h;
        else cout << "Korkeus ei voi olla negatiivinen!" << endl;
    }

    double getArea() const {
        return width * height;
    }

    double getCircum() const {
        return 2 * (width + height);
    }
};

// Student-luokka
class Student {
private:
    string name;
    int studentNumber;
    double average;

public:
    Student() : name(""), studentNumber(0), average(0.0) {}

    void setName(const string& n) {
        name = n;
    }

    void setStudentNumber(int num) {
        studentNumber = num;
    }

    void setAverage(double avg) {
        average = avg;
    }

    string getName() const {
        return name;
    }

    int getStudentNumber() const {
        return studentNumber;
    }

    double getAverage() const {
        return average;
    }
};


int main() {
    // Vaihe 1: Car-luokka
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2024);
    cout << "Car-luokan tiedot:" << endl;
    myCar.printData();

    // Vaihe 2: Rectangle-luokka
    Rectangle* rect = new Rectangle();
    rect->setWidth(5.5);
    rect->setHeight(3.2);
    cout << "\nRectangle-luokan tiedot:" << endl;
    cout << "Pinta-ala: " << rect->getArea() << endl;
    cout << "Ympärysmitta: " << rect->getCircum() << endl;
    delete rect;

    // Vaihe 3: Student-luokka
    shared_ptr<Student> student = make_shared<Student>();
    student->setName("Matti Meikäläinen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);
    cout << "\nStudent-luokan tiedot:" << endl;
    cout << "Nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student->getAverage() << endl;

    return 0;
}
