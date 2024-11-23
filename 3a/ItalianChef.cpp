#include "ItalianChef.h"

ItalianChef::ItalianChef(const std::string& name) : Chef(name) {
    std::cout << "ItalianChef " << name << " konstruktori\n";
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << name << " destruktori\n";
}

std::string ItalianChef::getName() const {
    return name;
}

void ItalianChef::makePasta() {
    std::cout << "ItalianChef " << name << " makes pasta\n";
}
