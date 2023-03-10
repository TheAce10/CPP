#include <iostream>

int main() {
    bool isit= true;
    bool isnot= false;
    std::cout << isit << "\n\n";
    std::cout << isnot;

    /*The char data type is used to store a single character.
     The character must be surrounded by single quotes, like 'A' or 'c':*/

    char grade = 'A';

    // Alternatively, you can use ASCII values to display certain characters:

    char ab = 65, bc = 66, cd = 67;
    std::cout << ab;
    std::cout << bc;
    std::cout << cd;


    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    /*String Types
    The string type is used to store a sequence of characters
     (text). This is not a built-in type, but it behaves like 
     one in its most basic usage. String values must be 
     surrounded by double quotes:*/
     string greeting = "Hunter x Hunter";
    cout << greeting;

    // Operators are used to perform operations on variables and values.
    int sum1 = 100 + 50;        // 150 (100 + 50)
    int sum2 = sum1 + 250;      // 400 (150 + 250)
    int sum3 = sum2 + sum2;     // 800 (400 + 400)

    /*
    +	Addition	    Adds together two values	x + y	
    -	Subtraction	    Subtracts one value from another	x - y	
    *	Multiplication	Multiplies two values	x * y	
    /	Division	    Divides one value by another	x / y	
    %	Modulus	        Returns the division remainder	x % y	
    ++	Increment	    Increases the value of a variable by 1	++x	
    --	Decrement	    Decreases the value of a variable by 1	--x   */

    /*
    Assignment Operators
    Assignment operators are used to assign values to variables.
    In the example below, we use the assignment operator (=) to assign the value 10 to a variable called x
    */
   int nn = 10;
return 0;
   
}