#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
//#include <vector>

using namespace std;



class player {
private:
    string name;
    int age;char gender;
    int progress[];
protected:
public:
    void createProfile(string name){
        ofstream file("player.txt");
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
    void saveProgress(int i,int a){
        progress[i]= a;
    }
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

class game{
public:
    void loadplayer(string& s){
        ifstream file("player.txt");
        getline(file, s);
        file.close();
    };
    void saveplayer (){};
    void getProgress(){};
    //void createNewplayer(){};
    void deleteProfile(){};
};

class Ace:public game,stage,character{};

int main()
{
    string name,data;
        cout << "DETECTIVE ACE!\t" << endl;
    //cout << "Welcome"<<" Hello Enter your name!\t" << endl;
    //cin >> name;
    //player a;
    //a.setPlayerInfo();
    //a.createProfile(name);
    // a.getProfile(data);

    stage A;
    A.setChoice(0, "ONCE UPON A TIME .........");
    A.setChoice(1, "thererrvzfvfjvndfnvs\n");
    A.setChoice(2, "hhbhbhbfbbbjhbjfdbfv\n");

    stage B;
    B.setChoice(0, "ONCE UPON A TIME .........");
    B.setChoice(1, "thererrvzfvfjvndfnvs\n");
    B.setChoice(2, "hhbhbhbfbbbjhbjfdbfv\n");

    stage C;
    C.setChoice(0, "ONCE UPON A TIME .........");
    C.setChoice(1, "thererrvzfvfjvndfnvs\n");
    C.setChoice(2, "hhbhbhbfbbbjhbjfdbfv\n");

    stage D;
    D.setChoice(0, "ONCE UPON A TIME .........");
    D.setChoice(1, "thererrvzfvfjvndfnvs\n");
    D.setChoice(2, "hhbhbhbfbbbjhbjfdbfv\n");

    stage E;
    E.setChoice(0, "ONCE UPON A TIME .........");
    E.setChoice(1, "thererrvzfvfjvndfnvs\n");
    E.setChoice(2, "hhbhbhbfbbbjhbjfdbfv\n");

    char ccc;int conv;
    
    //char stg[5]= {'A','B','C','D','E'};
    while (true){
        for (int i=0;i<5;i++){
            switch(i){
                case 0:
                A.display(1);
                A.display(2);
                getch();
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
            ccc=getch();

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


    return 0;
}
