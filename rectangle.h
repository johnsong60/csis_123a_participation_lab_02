//
// Created by Joe on 8/25/2020.
//

#ifndef UNTITLED1__RECTANGLE_H_
#define UNTITLED1__RECTANGLE_H_

class Rectangle {
private:
    int width;
    int length;

public:
    Rectangle();
    Rectangle(int width, int length);
    [[nodiscard]] int area() const;
    [[nodiscard]] int perimeter() const;

};

#endif //UNTITLED1__RECTANGLE_H_
