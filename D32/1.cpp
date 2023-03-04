#include <iostream>
#include <fstream>
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


    return 0;
}