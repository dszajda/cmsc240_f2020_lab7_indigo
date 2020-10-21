#ifndef __CIRCLE_CPP__
#define __CIRCLE_CPP__

#include "Circle.h"
#include <iostream>

Circle::Circle() : Shape(), radius{0} {} 

Circle::Circle(std::string name, double rad) : Shape(name), radius{rad} {} 

Circle::~Circle() {}

void Circle::print() {
    Shape::print();
    std::cout << "radius = " << this->radius << std::endl;
}

double Circle::getArea() {
    const long double PI = 3.141592653589793238;
    return(this->radius*this->radius*PI);
}
#endif 
