#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include <string>

class Circle: public Shape {
    private:
        std::string name;
	double radius;
	const long double PI = 3.141592653589793238;

    public:
        Circle(std::string name, double radius);
        ~Circle();

        double getArea();

        void print();
};
#endif
