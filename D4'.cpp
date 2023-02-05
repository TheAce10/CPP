#include <iostream>
#include <string>

using namespace std;
int main() {
/*Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
Unlike an array, a structure can contain many different data types (int, string, bool, etc.).*/
struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable
struct    {
    /* data */
    int num;
    string fullName;
} CoE3;

//Assign values to members of CoE3
CoE3.fullName="";
CoE3.num= 0;

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";

// You can use a comma (,) to use one structure in many 
// variables:

struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas
    
// Example
// Use one structure to represent two cars:

struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

// By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.

// To create a named structure, put the name of the structure right after the struct keyword:

struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};

// To declare a variable that uses the structure, use the name of the structure as the data type of the variable:

myDataType myVar;
myVar.myNum= 145;
myVar.myString= "George";
return 0;
}

// Example
// Use one structure to represent two cars:

// Declare a structure named "car"
