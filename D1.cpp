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


    



    return 0;
}