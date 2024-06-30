#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int value) : data(value), left(nullptr), right(nullptr){}
};


class binarytree{
private:
    node* root;
public:
    binarytree() : root(nullptr){};

    void insert(int value);
    void printtree(){
        //posttraverse(root);
        pretraverse(root);

    }
    void posttraverse(node* ptr);
    void pretraverse(node* ptr);
};

void binarytree::posttraverse(node* ptr){

    if(ptr != NULL){
        posttraverse(ptr->left);
        posttraverse(ptr->right);
        cout<<" "<<ptr->data;
    }
}
void binarytree::pretraverse(node* ptr){
    if(ptr != NULL){
        cout<<" "<<ptr->data;
        pretraverse(ptr->left);
        pretraverse(ptr->right);
        cout<<"\n";
    }
}

void binarytree::insert(int value){
    node* newNode = new node(value);
    node* parent = NULL;

    if(root == nullptr){
        root = newNode;
    }
    else {
        node* ptr = root;
        while(ptr!=NULL){
            parent = ptr;
            if(value > ptr->data){
                ptr = ptr->right;
            }
            else {
                ptr = ptr->left;
            }
        }
        if(value < parent->data){
            parent->left = newNode;
        }
        else {
            parent->right = newNode;
        }
    }
};

int main(){
    binarytree* bst = new binarytree();
    bst->insert(30);
    bst->insert(20);
    bst->insert(10);
    bst->insert(25);
    bst->insert(40);
    bst->insert(35);
    bst->insert(50);
    bst->insert(60);

    bst->printtree();
    return 0;
}
