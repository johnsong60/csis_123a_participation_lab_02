//
// Created by Joe on 8/25/2020.
//
#include "rectangle.h"
#include <iostream>

int main () {
    Rectangle small;
    Rectangle large(width:5, length:5);

    std::cout << "small area: " << small.area () <<std::endl;
    std::cout << "large area: " << small.area () <<std::endl;


}
