#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;
// standard commands

/*primary library for input output processing*/

class game{
protected:
    char playerChoice[5];
public:
    //Create player profile text file
    void profiles(){ofstream file("profile.txt");
        file.close();}
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
int main() {

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
    int nnn[5]= {};
    while (true){
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
    }
    // game ace;
    // ace.profiles();
    /*main area for code execution*/
    // string name;
    // cout << "Enter name:\t";
    // cin >> name;

    // ofstream nfile(name+".txt");
    // nfile << "PLAYER\n";
    // nfile.close();

    //print to console

    /*Documentary*/

    // inline comments

    // Thats all for today

    // int cvc = system("dir");
    // cout << cvc <<endl;


    // string treee= "One is true";
    // cout << treee[5]<<endl;
     //return command
}}