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

class storyNode {
    public:
    // int id;
    string data;
    storyNode* c1= NULL;
    storyNode* c2= NULL;
    storyNode(string a) : data(a){}
    storyNode(string a, storyNode* left,storyNode* right) : data(a),c1(left),c2(right){}
    
    void insertNode(storyNode *node,int a){
        if(a==1){
            c1=node;
        }
        else if(a==2){
            c2=node;
        }
    };

};

class storyTree {
    storyNode *root;
    storyNode* c1;
    storyNode* c2;
public:
    storyTree(storyNode* r): c1(NULL),c2(NULL){}
};


void createNode(string b){
    storyNode* node= NULL;
        // node->id= a;
        node->data= b;
        node->c1= NULL;
        node->c2= NULL;
}

class Node {
    string data;
    Node *left;
    Node *right;
    public:
    Node(string s):data(s), left(nullptr), right(nullptr){}
    ~Node(){}
    string getData(){
        return this->data;
    }

};
class BinTree {
    Node root;
    // Node *left;
    // Node *right;
    public:

    void setLeft(Node* l){
        this->left= l;
    }

    void setRight(Node* r){
        this->right= r;
    }

    Node* getLeft(){
        return this->left;
    }

    Node* getRight(){
        return this->right;
    }
};

int main(){
    Node story("1");
    Node* story1[7];
    for(int i=0;i<7;i++){
        
    }
}

