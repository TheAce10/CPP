#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <string.h>
//#include <vector>

using namespace std;



class player {
private:
    string name,tempS,age, gender,s,level;
    char playerChoice[5];
protected:
public:
    player(){
    name= "";age="";gender="",s="",level="";}
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
        s+="Name: "+name+"\nAge: "+age+"\nGender: "+gender+"\nLevel: "+level+"\n";
        file1 << s;
        file1.close();}

};
class character {
    private:
    int rank;
    public:
    int ge;
};
class stage {
    private:
    string choice1;
    string choice2;
    string story;
    public:
    stage(){
        string choice1,choice2,story= "";
    }
    void setChoice(int a, string b){
        if (a==0){
            story= b;
        }
        else if (a==1){
            choice1= b;
        }
        else if (a==2){
            choice2 =b;
        }

    }
    void display(int a){
        /*A function to display choices (arg* int) */
        if (a==1){
        cout<<"1."<<choice1;
        }
        else if (a==2){
        cout<<"2."<<choice2;
        }
    }
};
class story {
private:
    string str;
    string path;
public:
    void selectStory(string w){

    }
};
class game{
private:
    string tempS,ls;
public:
    //Create player profile text file
    void profiles(){
        ofstream file("profile.txt");
        file.close();}
    void loadplayer(string& s){
        int i=0;
        ifstream file("player.txt");
        while (getline(file, tempS)) {
            if (i%4==0){
            ls+= tempS+"\n";}
            i++;
        }
    };
    void getProfile(string& s){
        ifstream file("player.txt");
        getline(file, s);
        file.close();}
    void getProgress(){};
    void deleteProfile(){};
    void recordChoice(){
    }
};


//class Ace:public game, stage, character{};

int main(){
// standard commands

/*primary library for input output processing*/

    /*main area for code execution*/
    /*string name;
    cout << "Enter name:\t";
    cin >> name;

    ofstream nfile(name+".txt");
    nfile << "PLAYER\n";
    nfile.close();
*/
    //print to console

    /*Documentary*/

    // inline comments

    // Thats all for today

    string name,data;
    cout << "DETECTIVE ACE!\t" << endl;

    game Ace;
    Ace.profiles();
    stage A;
    A.setChoice(0, "ONCE UPON A TIME .........");
    A.setChoice(1, "11111111rvzfvfjvndfnvs\n");
    A.setChoice(2, "22222222bbbjhbjfdbfv\n");

    stage B;
    B.setChoice(0, "ONCE UPON A TIME .........");
    B.setChoice(1, "3333333vzfvfjvndfnvs\n");
    B.setChoice(2, "444444444fbbbjhbjfdbfv\n");

    stage C;
    C.setChoice(0, "ONCE UPON A TIME .........");
    C.setChoice(1, "55555555zfvfjvndfnvs\n");
    C.setChoice(2, "66666666bbbjhbjfdbfv\n");

    stage D;
    D.setChoice(0, "ONCE UPON A TIME .........");
    D.setChoice(1, "thererrvzfvfjvndfnvs\n");
    D.setChoice(2, "hhbhbhbfbbbjhbjfdbfv\n");

    stage E;
    E.setChoice(0, "ONCE UPON A TIME .........");
    E.setChoice(1, "thererrvzfvfjvndfnvs\n");
    E.setChoice(2, "hhbhbhbfbbbjhbjfdbfv\n");

    string age, gender;
    cout << "Welcome"<<" Hello Enter Your Info To Setup Profile\nUsername:\t" << endl;
    getline(cin,name);
    cout << "\nAge:\t";
    cin >> age;
    cout << "\nGender(m/f)\t";
    gender= getch();
    player a;
    a.setPlayerInfo(name,age,gender);
    a.createProfile();

    int nnn[5]= {};
        for (int i=0;i<5;i++){
            switch(i){
                case 0:
                A.display(1);
                A.display(2);
                //getch();
                break;
                case 1:
                B.display(1);
                B.display(2);
                break;
                case 2:
                C.display(1);
                C.display(2);
                break;
                case 3:
                D.display(1);
                D.display(2);
                break;
                case 4:
                E.display(1);
                E.display(2);
                break;
            }
            cout << "Select your choice\n";
            nnn[i]=getch();
            char command[50];
            strcpy(command, "cls");
            system(command);
            if (nnn[i]=='1' || nnn[i]=='2'){
                Ace.recordChoice();
            }
            else {

            cout <<"Invalid input, TRY AGAIN"<< endl;
                i--;
            }
    }

    /*
    int d=1;
    cout << "Enter your choice"
    cin>>d;
    int iii[]= {};
    while(true){
        if (d==1){
            iii
            break;
        }
        else if (d==2){
            break;
        }
        else {
            continue;
        }
    } */
    return 0; //return command
}
