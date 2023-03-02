#include  <iostream>

using namespace std;

//Classes
class classs
{
private:
    /* data */
    int age,level;
    string name;
public:
    classs(/* args */) {}
    ~classs() {}
    //inside declared funct

    void inside(){
        cout <<"inside";
    }
    void outside();

    void playName(){
        cin >> name;
    }
    void set1(int a,int b){
        age= a;
        level= b;
    }
};
void classs::outside(){
    cout << "outside"
}


int main() {
    cout << "Back at it";


    return 0;
}