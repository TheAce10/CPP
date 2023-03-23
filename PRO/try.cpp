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

class outcomeTree {
public:
    outcomeNode* root;
    outcomeTree(string rootData) {
        root = new outcomeNode(rootData);
    }
    void insert(string outcome1, string outcome2, outcomeNode* node) {
        node->left = new outcomeNode(outcome1);
        node->right = new outcomeNode(outcome2);
    }
    string play(int choice) {
        outcomeNode* current = root;
        while (current != nullptr) {
            cout << current->data << endl;
            if (choice == 1) {
                current = current->left;
            }
            else if (choice == 2) {
                current = current->right;
            }
            else {
                return "Invalid choice";
            }
        }
        return current->data;
    }
};

int main() {
    outcomeTree tree("You are at a crossroads. Do you go left or right?");
    tree.insert("You go left and find a treasure!", "You go right and get lost.", tree.root);
    tree.insert("You go left and find a dragon!", "You go right and find a magic sword.", tree.root->left);
    tree.insert("You go left and find a dragon!", "You go right and find a magic sword.", tree.root->left->left);
    tree.insert("You go left and find a dragon!", "You go right and find a magic sword.", tree.root->left->right);
    tree.insert("You go left and find a dragon!", "You go right and find a magic sword.", tree.root->right);
    tree.insert("You go left and find a dragon!", "You go right and find a magic sword.", tree.root->right->left);
    tree.insert("You go left and find a dragon!", "You go right and find a magic sword.", tree.root->right->right);


    
    cout << "Choose 1 or 2:" << endl;
    int choice;
    cin >> choice;
    cout << tree.play(choice) << endl;
    return 0;
}
/*In this example, we define a outcomeNode class to represent each node in the binary tree, with a data member variable to store the outcome as a string, and left and right pointers to outcomeNode objects for the left and right children.

We then define an outcomeTree class to represent the binary tree itself, with a root pointer to the outcomeNode object at the root of the tree. The outcomeTree class will have member functions to insert new outcomes into the tree and play the game by traversing the tree based on the player's choices.

In the insert function, we take two new outcomes as strings and a outcomeNode object as input, and create new outcomeNode objects for the left and right children with the new outcomes as their data.

In the play function, we take the player's choice as an integer input and traverse the tree accordingly. We print out the current outcome at each node, and return the final outcome at the leaf node based on the player's choices.

In the main function, we create a new outcomeTree object with the root outcome as a string, and insert two new outcomes for each child node. We then prompt the player to make a choice and call the play function to start the game, printing out the final outcome.
*/


