#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <string.h>

using namespace std;

/*class player {
private:
    string name,tempS,age, gender, s;
protected:
public:
    player(){
    name= "0";age="0";gender="0";}
    void setPlayerInfo(string a,string b,string c){
    name= a;
    age= b;
    gender= c;}
    void createProfile(){
        ifstream file("player.txt");
        while (getline(file, tempS)) {
            s+= tempS+"\n";
        }
        file.close();
        ofstream file1("player.txt");
        s+="Name: "+name+"\nAge: "+age+"\nGender: "+gender+"\n";
        file1 << s;
        file1.close();}

};

int main(){
    string name,age, gender;
    cout << "Welcome"<<" Hello Enter Your Info To Setup Profile\nUsername:\t" << endl;
    getline(cin,name);
    cout << "\nAge:\t";
    cin >> age;
    cout << "\nGender(m/f)\t";
    gender= getch();
    player a;
    a.setPlayerInfo(name,age,gender);
    a.createProfile();
}*/

// Sure, here's an example implementation of a binary tree that stores outcomes as strings for a two choice game:

#include <iostream>
#include <string>
using namespace std;

class outcomeNode {
public:
    string data;
    outcomeNode* left;
    outcomeNode* right;
    outcomeNode(string _data) {
        data = _data;
        left = nullptr;
        right = nullptr;
    }
};
