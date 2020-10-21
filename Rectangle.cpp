#ifndef __RECTANGLE_CPP__
#define __RECTANGLE_CPP__

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : Shape(), length{0}, width {0} {} 

Rectangle::Rectangle(std::string name, double length, double width) : Shape(name), length{length}, width{width} {} 

Rectangle::~Rectangle() {}

void Rectangle::print() {
    Shape::print();
    std::cout << "length = " << this->length << std::endl;
    std::cout << "width = " << this->width << std::endl;
}

double Rectangle::getArea() {
    return (this->length * this->width);
}
#endif 
