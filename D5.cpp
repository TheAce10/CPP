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


/*Creating Pointers
You learned from the previous chapter, that we can get the memory address of a variable by using the & operator:

Example
string food = "Pizza"; // A food variable of type string
*/
cout << food;  // Outputs the value of food (Pizza)
cout << &food; // Outputs the memory address of food
/*A pointer however, is a variable that stores the memory address as its value.

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

Example*/
string food1 = "Pizza";  // A food variable of type string
string* ptr = &food1;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food1 << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food1 << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

/*Example explained
Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

Use the & operator to store the memory address of the variable called food, and assign it to the pointer.

Now, ptr holds the value of food's memory address.

Tip: There are three ways to declare pointer variables, but the first way is preferred:

string* mystring; // Preferred
string *mystring;
string * mystring;*/

/*Get Memory Address and Value
In the example from the previous page, we used the pointer variable to get the memory address of a variable (used together with the & reference operator). However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):

Example*/
string food2 = "Pizza";  // Variable declaration
string* ptr2 = &food2;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr2 << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr2 << "\n";
/*Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (string* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.
*/
// Modify the Pointer Value
// You can also change the pointer's value. But note that this 
// will also change the value of the original variable:

// Example
string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";
/*end of day*/
/*lastcommit*/
int apoin= 123;
int* ppp= &apoin;
    return 0;
}   