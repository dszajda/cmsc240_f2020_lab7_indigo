#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include <string>
#include "Shape.h"

class Rectangle : public Shape
{
   private:
      double length;
      double width;

   public:
      Rectangle();
      Rectangle(std::string name, double length, double width);
      ~Rectangle();
      double getArea();
      void print();
};

#endif
