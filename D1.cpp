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

    



    return 0;
}