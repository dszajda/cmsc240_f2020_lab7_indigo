#ifndef __TRIANGLE_CPP__
#define __TRIANGLE_CPP__


#include "Triangle.h"
#include <iostream>

Triangle::Triangle(std::string name, double base, double height) : Shape(name)
{
   base = base;
   height = height;
}

Triangle::~Triangle(){}

double Triangle::getArea()
{
   return (0.5 * base * height);
}

void Triangle::print()
{
std::cout << name << ", " << base << ", " << height << std::endl;
}

#endif
