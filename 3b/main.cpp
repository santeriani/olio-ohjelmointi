#include "Animal.h"
#include "Dog.h"

using namespace std;

int main() {
    Animal animal;
    animal.callOut();

    cout << "-----------------------\n";

    Dog dog;
    dog.callOut();

    cout << "-----------------------\n";

    Animal* polyAnimal = new Dog();
    polyAnimal->callOut();
    delete polyAnimal;

    return 0;
}
