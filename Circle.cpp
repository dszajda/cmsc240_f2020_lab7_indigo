#ifndef __CIRCLE_CPP__
#define __CIRCLE_CPP__

#include "Circle.h"
#include <iostream>

Circle::Circle() : Shape(), radius{0} {} 

Circle::Circle(std::string name, double rad) : Shape(name), radius{rad} {}


Circle::~Circle() {}

void Circle::print() {
    Shape::print();
    cout << "radius = " << this->radius << endl;

double getArea()
    double temp = this->radius*this->radius;
    double temp1 = this->pi*temp;
    return(temp1); 
