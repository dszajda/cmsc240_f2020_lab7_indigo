#include <iostream>
#include "Shape.h"

int main() {

    Shape sh("test");
    
    std::cout << "Testing getArea() Method:" << std::endl;
    std::cout << "---------" << std::endl;
    std::cout << sh.getArea() << std::endl;
    std::cout << "Expected [0.0]" << std::endl;

    std::cout << "Testing print() Method:" << std::endl;
    std::cout << "---------" << std::endl;
    sh.print();
    std::cout << "Expected [test]" << std::endl;

}
