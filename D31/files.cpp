#include <iostream>
#include <fstream>

using namespace std;
int main(){
    string text;
    ofstream prog("progress.txt");
    prog << "Level = 3\n123456789";
    prog.close();
    ifstream prog1("progress.txt");
    
}