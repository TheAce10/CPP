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

// Multi dimensional Array
// To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:

string letters[2][4];
letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
/*Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.

Arrays can have any number of dimensions. The more dimensions an array has, the more complex the code becomes. The following array has three dimensions:
*/
string letters1[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
/*To access an element of a multi-dimensional array, specify an index number in each of the array's dimensions.

This statement accesses the value of the element in the first row (0) and third column (2) of the letters array.*/
cout << letters[0][2];  // Outputs "C"

/*To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.

The following example outputs all elements in the letters array:

Example */
string letters2[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for(int i = 0; i < 2; i++) {
  for(int j = 0; j < 4; j++) {
    cout << letters2[i][j] << "\n";
  }
}
return 0;
}