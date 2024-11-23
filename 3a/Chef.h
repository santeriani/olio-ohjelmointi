#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

class Chef
{
protected:


    std::string name;

public:
    explicit Chef(const std::string& name);

    virtual ~Chef();

    void makeSalad();
    void makeSoup();
};

#endif
