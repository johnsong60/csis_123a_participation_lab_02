//
// Created by Joe on 8/25/2020.
//

#include "rectangle.h"
Rectangle::Rectangle() :width(1), length(1){}
Rectangle::Rectangle(int width, int length) : width(width), length(length){
}
int Rectangle::area() const {
    return width * length;
}
int Rectangle::perimeter() const {
    return 2 * (width + length);
}
