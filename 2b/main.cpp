#include <iostream>
#include <vector>
#include <string>

using namespace std;


// car-luokka
class Car {
private :
    string brand;
    string model;
    int yearModel;


public:
    Car(const string& b, const string& m, int y) : brand(b), model(m), yearModel(y) {}

    void printData() const {
        cout << "merkki: " << brand << ", malli: " << model << ", vuosi: " << yearModel << endl;
    }
};

int main()
{
    vector<Car> carList;

    Car car1("Toyota", "corolla", 2024);
    Car car2("Honda", "civic", 2000);
    Car car3("Ford", "fiesta", 2004);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    cout << "Toisen alkion tiedot:" << endl;
    carList[1].printData();

    cout << "\nKaikkien autojen tiedot: " << endl;
    for (const auto& car : carList) {
        car.printData();
    }
}
