#include "Chef.h"

Chef::Chef(const std::string& name) : name(name) {
    std::cout << "Chef " << name << " konstruktori\n";
}

Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori\n";
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad\n";
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup\n";
}
