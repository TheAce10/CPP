#include <iostream>
using namespace std;
/*Inheritance
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):

Example*/
class vehicle {
    int x;
    public:
    int y;
};

class Car: public vehicle {
    int xx;
    public:
    int yy;
    /*Why And When To Use "Inheritance"?
- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.*/
    };

// Multilevel inheritance
class sportsCar : public Car{
