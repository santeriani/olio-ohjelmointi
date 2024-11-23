#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal
{
public:
    virtual ~Animal();

    virtual void callOut() const;
};

#endif
