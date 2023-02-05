#include <iostream>
#include <string>
using namespace std;

int main() {
    //Arrays continued
    /*To get the size of an array, you can use the sizeof() operator:
Example*/
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);
//returns 20 because the sizeof() operator returns the size 
// of a type in bytes.

// to get actual array length use the ff
int getArrayLength = sizeof(myNumbers) / sizeof(int);
cout << getArrayLength;

return 0;
}