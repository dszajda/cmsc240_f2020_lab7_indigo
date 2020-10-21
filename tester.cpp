#include <iostream>
#include "Shape.h" 
#include "Triangle.h"
#include "Rectangle.h"

int main() {

    //test Shape Class and its implementation
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Shape Class:" << std::endl;
    std::cout << "----------------" << std::endl;


    Shape sh{"test"};
    
    std::cout << "Testing getArea() Method:" << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << sh.getArea() << std::endl;
    std::cout << "Expected [0.0]" << std::endl;

    std::cout << "Testing print() Method:" << std::endl;
    std::cout << "---------" << std::endl;
    sh.print();
    std::cout << "Expected [test]" << std::endl;

    //-------------------------------------------------------------------------

    //test Triangle Class and its implementation
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Triangle Class:" << std::endl;
    std::cout << "----------------" << std::endl;


    Triangle tr{"test-tr", 3, 4};

    std::cout << "Testing getArea() Method:" << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << tr.getArea() << std::endl;
    std::cout << "Expected [6]" << std::endl;

    std::cout << "Testing print() Method:" << std::endl;
    std::cout << "---------" << std::endl;
    tr.print();
    std::cout << "Expected [test-tr, 3, 4]" << std::endl;

    //------------------------------------------------------------------------

    //test Rectangle Class and its implementation
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    std::cout << "Rectangle Class:" << std::endl;
    std::cout << "----------------" << std::endl;


    Rectangle re{"test-re", 3, 5};

    std::cout << "Testing getArea() Method:" << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << re.getArea() << std::endl;
    std::cout << "Expected [15]" << std::endl;

    std::cout << "Testing print() Method:" << std::endl;
    std::cout << "---------" << std::endl;
    re.print();
    std::cout << "Expected [test-re, 3, 5]" << std::endl;  
}
