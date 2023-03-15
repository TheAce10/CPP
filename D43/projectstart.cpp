#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class player {
private:
    int age;char gender;int progress;
protected:
public:
    void createProfile(string name){
        ofstream file("player.text");
        file << "Player 1\n name: "<<name<<"\nage: "<<age << "\nProgress: " << progress;
        file.close();}
    void getProfile(string& s){
        ifstream file("player.txt");
        getline(file, s);
        file.close();}
    void setPlayerInfo(){
        cout << "Player age:\t";
    cin >> age;
    cout << "\nPlayer gender:\t";
    cin >>gender;}
    void saveProgress(int a){
        progress= a;
    }
};

int main()
{
    string name,data;
    cout << "Hello Enter your name!\t" << endl;
    cin >> name;
    player a;
    a.setPlayerInfo();
    a.createProfile(name);
    a.getProfile(data);

    return 0;
}
