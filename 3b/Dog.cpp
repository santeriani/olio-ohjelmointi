#include "Dog.h"

Dog::~Dog() {
    std::cout << "Dog object destroyed.\n";
}

void Dog::callOut() const {
    std::cout << "Koira haukkuu!\n";
}
