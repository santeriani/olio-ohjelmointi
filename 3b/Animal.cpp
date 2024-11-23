#include "Animal.h"

Animal::~Animal() {
    std::cout << "Animal object destroyed.\n";
}

void Animal::callOut() const {
    std::cout << "Eläin ääntelee.\n";
}
