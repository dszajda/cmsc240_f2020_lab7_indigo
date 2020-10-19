#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <string>
#include "Shape.h"

class Circle: public Shape {
    private:
	double radius;

    public:
	Circle();
        Circle(std::string name, double radius);
        ~Circle();

        double getArea();

        void print();
};
#endif
