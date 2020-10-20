#ifndef __TRIANGLE_CPP__
#define __TRIANGLE_CPP__


#include "Triangle.h"
#include <iostream>

Triangle::Triangle() : Shape(), base{0}, height{0} {}

Triangle::Triangle(std::string name, double base, double height) : Shape(name), base{base}, height{height} {}

Triangle::~Triangle(){}

double Triangle::getArea()
{
   return (0.5 * this->base * this->height);
}

void Triangle::print()
{
   Shape::print();
   std::cout << "base = " << this->base << std::endl;
   std::cout << "height = " << this->height << std::endl;
}

#endif
