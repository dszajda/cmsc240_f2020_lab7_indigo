#ifndef __SHAPE_CPP__
#define __SHAPE_CPP__

#include "Shape.h"
#include <iostream>

Shape::Shape(std::string shapeName) {}
Shape::~Shape() {}

double Shape::getArea()
{
return 0;
//return name.getArea();
}

void Shape::print()
{
std::cout << name << std::endl;
}

#endif
