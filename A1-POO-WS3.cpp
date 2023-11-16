#include <iostream>
#include "Square2D.hpp"
#include "ShapeStore.hpp"

int main()
{
    Shape2D* myshape1 = new Rectangle2D(10, 5);
    std::cout << myshape1->getInfoStr() << "\n";
    std::cout << "Perimetre: " << myshape1->getPerimeter() << "\n";
    std::cout << "Aire: " << myshape1->getSurfaceArea() << "\n";
    
    Shape2D* myshape2 = new Square2D(5);
    std::cout << myshape2->getInfoStr() << "\n";
    std::cout << "Perimetre: " << myshape2->getPerimeter() << "\n";
    std::cout << "Aire: " << myshape2->getSurfaceArea() << "\n";
    










    /*ShapeStore store;

    std::cout << "append1: " << store.append(myshape1) << "\n";
    std::cout << "append2: " << store.append(myshape2) << "\n";

    std::cout << store.getInfoStr() << "\n";*/

    delete myshape1;
    delete myshape2;
}
