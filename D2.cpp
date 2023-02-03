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

 