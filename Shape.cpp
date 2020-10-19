#ifndef __SHAPE_CPP__
#define __SHAPE_CPP__


#include "Shape.cpp"
#include <iostream>

Shape::Shape(std::string shapeName) {}
Shape::~Shape() {}

double Shape::getArea()
{
return 1;
//return name.getArea();
}

void Shape::print()
{
std::cout << name << std::endl;
}

#endif
