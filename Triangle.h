#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include <string>
#include "Shape.h"

class Triangle : public Shape
{
   private:
      double base;
      double height;

   public:
      Triangle();
      Triangle(std::string name, double base, double height);
      ~Triangle();
      double getArea();
      void print();
};

#endif


