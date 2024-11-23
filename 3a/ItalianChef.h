#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef
{
public:

    explicit ItalianChef(const std::string& name);

    ~ItalianChef() override;

    std::string getName() const;
    void makePasta();
};

#endif
