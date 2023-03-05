#include <iostream>
#include <fstream>

using namespace std;
int main(){
    string text;
    ofstream prog("progress.txt");
    prog << "Level = 3\n123456789";
    prog.close();
    ifstream prog1("progress.txt");
    while (getline (prog1, text)){
        cout << text.length();
        cout << "\n";
    }
    prog1.close();

    /*write a c++ program file*/
    ofstream cplus("1.cpp");
    cplus << "#include <iostream>\n#include <fstream>\nusing namespace std;\n\nint main() {"
    <<"\nofstream new1(\"new.txt\");\nnew1 << \"i did it\"; \nnew1.close();\nreturn;\n}";
    cplus.close();

}