#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
    ~Dog() override;

    void callOut() const override;
};

#endif
