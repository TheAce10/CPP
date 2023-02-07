#include <iostream>
#include <string>

using namespace std;
// Syntax
void myFunction() {
    cout << "I just got executed!";
  // code to be executed
}

void myFunction(int a,int b);
void numerical();
// int main() {
// string food = "Pizza";
// string* ptr = &food;

// // Output the value of food (Pizza)
// cout << food << "\n";

// // Output the memory address of food (0x6dfed4)
// cout << &food << "\n";

// // Access the memory address of food and output its value (Pizza)
// cout << *ptr << "\n";

// // Change the value of the pointer
// *ptr = "Hamburger";

// // Output the new value of the pointer (Hamburger)
// cout << *ptr << "\n";

// // Output the new value of the food variable (Hamburger)
// cout << food << "\n";
//     return 0;
// }

int main() {
    /*Create a Function
C++ provides some pre-defined functions, such as main(), which is used to execute code. But you can also create your own functions to perform certain actions.

To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ():*/
    numerical();

/*Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:

Syntax
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}*/

/*The following example has a function that takes a string called fname as parameter. When the function is called, we pass along a first name, which is used inside the function to print the full name:

Example
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes*/
/*Note: The following example has a function that takes a string called fname as parameter. When the function is called, we pass along a first name, which is used inside the function to print the full name:

Example
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes*/

/*Default Parameter Value
You can also use a default parameter value, by using the equals sign (=).

If we call the function without an argument, it uses the default value ("Norway"):

Example
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}

// Sweden
// India
// Norway
// USA*/

/*Multiple Parameters
Inside the function, you can add as many parameters as you want:

Note that when you are working with multiple parameters, 
the function call must have the same number of arguments as 
there are parameters, and the arguments must be passed in the 
same order.*/

/*Return Values
The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:

Example
int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}

// Outputs 8 (5 + 3)
This example returns the sum of a function with two parameters:

Example
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  cout << myFunction(5, 3);
  return 0;
}

// Outputs 8 (5 + 3)
You can also store the result in a variable:

Example
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int z = myFunction(5, 3);
  cout << z;
  return 0;
}
// Outputs 8 (5 + 3)*/
    return 0;
}
// definition
void numerical() {
    int n[2][2];
    cout << "Enter matrix A\t";
    cout << "Row1 Col1\n";
    cin >> n[0][0];
    cout << "Row1 Col2\n";
    cin >> n[0][1];
    cout << "Row2 Col1\n";
    cin >> n[1][0];
    cout << "Row2 Col2\n";
    cin >> n[1][1];
    cout << "Matrix A \n";

    for(int i=0;i<2;i++){
        switch(i){
            case 0:
            cout<< n[i][0]<<"\t";
            cout<< n[i][1]<<"\n";
            break;
            case 1:
            cout<< n[i][0]<<"\t";
            cout<< n[i][1]<<"\n";
            break;
        }
    }
}

