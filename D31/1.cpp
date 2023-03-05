#include <iostream>
#include <fstream>
using namespace std;

int main() {
ofstream new1("new.txt");
new1 << "i did it"; 
new1.close();
return;
}