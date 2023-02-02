#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" <<'\n';
    cout << "My first Cpp code";
    
    //Omitting namespace std
    std::cout << "\nomitted namespace";

    /*The newline character (\n) is called an escape sequence,
     and it forces the cursor to change its position to the 
    beginning of the next line on the screen. 
    This results in a new line. */
    cout << "\nHello World!\n";


    //For new lines endl manipulator can be used
    cout << "Hello World!" << endl;

    /* In C++, there are different types of variables (defined with different keywords), for example:

    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false*/

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    //Display Variables
    int myAge = 25;
    cout << "I am " << myAge << " years old.";

    //Declare Many Variables
    int x = 5, y = 6, z = 50;
    cout << x + y + z;

    /*The general rules for naming variables are:

    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names*/
    
    /*Constants
    When you do not want others (or yourself) to override 
    existing variable values, use the const keyword 
    (this will declare the variable as "constant", which means
     unchangeable and read-only):*/

     const int birthday = 101103;
    //  birthday = 10; // error: assignment of read-only variable 'myNum'

    //User Input
    int xin;
    cout << "Enter a number";
    cin >> xin ;

    //Exp
    cout << xin ;

    


    return 0;
}