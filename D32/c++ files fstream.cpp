#include <iostream>
#include <fstream>
#include <string>
/*C++ Files
The fstream library allows us to work with files.
To use the fstream library, include both the standard <iostream> AND the <fstream> header file:*/

using namespace std;

int main() {
    int vase;
    /*There are three classes included in the fstream library, which are used to create, write or read files:

Class	Description
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	    A combination of ofstream and ifstream: creates, reads, and writes to files */
  // Create and open a text file
ofstream MyFile("filename.txt");

  // Write to the file
MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
MyFile.close();
  /*Why do we close the file?
It is considered good practice, and it can clean up unnecessary memory space.*/
  // TRY WITH FSTREAM
// fstream MyFile("filename1.txt");

  // Write to the file
// MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  // MyFile.close();

  // Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyRead("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyRead, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyRead.close();
    return 0;
}