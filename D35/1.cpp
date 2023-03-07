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
    protected:
    unsigned long int number;
    static string manufacturer;
    private:
    int x;
    public:
    int y;
};

class Car: public vehicle {
    private:
    int xx;
    protected:
    string model;

    public:
    Car(){model= "Null";}
    void setModel(string valx){
        model = valx;
    }
    string getModel(){
        return model;
    }
    /*Why And When To Use "Inheritance"?
- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.*/
    };

// Multilevel inheritance
class sportsCar : public Car{
    /*Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.

In this example, sportsCar is derived from class Car (which is derived from vehicle).*/
    float speed;
    public:
    sportsCar(){
        speed= 0.00;
    }
     void setSpeed(float valx){
        speed = valx;
    }
    float getSpeed(){
        return speed;
    }
};

int main(){
    sportsCar n1;
    
}