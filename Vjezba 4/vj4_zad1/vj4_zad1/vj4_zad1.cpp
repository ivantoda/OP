#pragma once
#include <iostream>
#include "vektor.h"

int main()
{
    vektor c;
    c.vektor_push_back(5);
    c.display_vektor();
    c.vektor_pop_back();
    c.display_vektor();
    vektor a(4,2);
    a.display_vektor();
    vektor b(a);
    b.display_vektor();
    std::cout << "" << std::endl;
    return 0;
}
