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

int main() {
    /*Multi-dimensional arrays are great at representing grids. 
    This example shows a practical use for them. In the 
    following example we use a multi-dimensional array to 
    represent a small game of Battleship:

Example*/
// We put "1" to indicate there is a ship.
bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;

// Allow the player to keep going until they have hit all four ships
while (hits < 4) {
  int row, column;

  cout << "Selecting coordinates\n";

  // Ask the player for a row
  cout << "Choose a row number between 0 and 3: ";
  cin >> row;

  // Ask the player for a column
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;

  // Check if a ship exists in those coordinates
  if (ships[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    ships[row][column] = 0;

    // Increase the hit counter
    hits++;

    // Tell the player that they have hit a ship and how many ships are left
    cout << "Hit! " << (4-hits) << " left.\n\n";
  } else {
    // Tell the player that they missed
    cout << "Miss\n\n";
  }

  // Count how many turns the player has taken
  numberOfTurns++;
}

cout << "Victory!\n";
cout << "You won in " << numberOfTurns << " turns";
    return 0;
}