#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();


    std::cout << "-----------------------\n";

    ItalianChef italianChef("Anthony Bourdain");
    italianChef.makeSalad();
    italianChef.makeSoup();
    italianChef.makePasta();

    std::cout << "name of the Italian Chef is " << italianChef.getName() << "\n";

    return 0;
}
