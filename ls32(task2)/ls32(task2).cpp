#include <iostream>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "OutsideClass.h"

int main()
{
    Danylo::Class1 obj1;
    Danylo::Class2 obj2;
    Danylo::Class3 obj3;
    Outside obj4;
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    std::cout << "------------------------------------------\n\n";
    using namespace Danylo;
    Class1 obj5;
    Class2 obj6;
    Class3 obj7;
    Outside obj8;
    obj5.show();
    obj6.show();
    obj7.show();
    obj8.show();
}