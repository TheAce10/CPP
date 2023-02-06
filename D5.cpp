#include <iostream>
#include <string>

using namespace std;
/*
int main() {
    //BMI CALC
    float height,weight,BMI;
    cout << "BMI cALCULATION\n" << "Enter your height(cm)\t";
    cin >> height ;
    cout << "Enter your weight(kg)\t";
    cin >>weight;
    cout << "Height:\t"<<height<<"\nWeight:\t"<<weight;

    // convert height to meters
    height/=100;

    // BMI
    BMI= weight/(height*height);
    cout << "\nCalcuated BMI:\t"<< BMI;
    // Check for BMI Feedback
    if (BMI<18.5){
        cout << "\n You are underweight";
    }
    else if(18.5<BMI<24.9){
        cout << "\n Your weight is normal";
    }
    else if(25<BMI<29.9){
        cout << "\n You are overweight";
    }
    else if(30<BMI<39.9){
        cout << "\n Your are obese";
    }
    else if(BMI>=40){
        cout << "\n Your morbidly obese";
    }
    return 0;
}
*/
int main() {
    string acd= "bread";
    string &newdata= acd;
    /*Creating References
    A reference variable is a "reference" to an existing variable, and it is created with the & operator:
    */
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food
    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza

    /*Memory Address
In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored:

Example
*/
cout << &food; // Outputs address e.g. 0x5e7c3ff9c0

// Note: The memory address is in hexadecimal form (0x..).
/*And why is it useful to know the memory address?
References and Pointers (which you will learn about in the next chapter) are important in C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.

These two features are one of the things that make C++ stand 
out from other programming languages, like Python and Java.*/


    return 0;
}