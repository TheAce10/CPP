#include <iostream>
#include <fstream>
using namespace std;

int main() {ofstream new("new.txt");
new << "i did it"; 
new.close();
return;}