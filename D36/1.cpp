#include <iostream>

using namespace std;
class player {
    int age, s;
    char gender;
    string name;

    public:
    void setGender(char), setAge(int), setName(string);
    
};

void player::setGender(char a){
    gender= a;
}
void player::setAge(int a){
    age= a;
}
void player::setName(string a){
    name= a;
}