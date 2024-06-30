#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node() : data(0), next(nullptr){};
    node(int value) : data(value), next(nullptr){};
};

class linkedlist{
protected:
    node* head;
public:
    linkedlist() : head(nullptr){};

    void insertnode(int val){
        node* newnode = new node(val);
        node* parent;

        if(head == nullptr){
            head = newnode;
        }
        else{
            node* current = head;
            while(current != NULL){
                parent = current;
                current = current->next;
            }

            parent->next = newnode;
        }
    }
    void printtree(){
        traverse(head);
    }
    void traverse(node* ptr){
        if(ptr != NULL){
            cout<<" "<<ptr->data;
            traverse(ptr->next);
            //cout<<"\n";
        }
    }

    void search(int value){

        cout <<value<<"is at position " <<searchlist(value, head);
    }
    int position = 0;
    int searchlist(int value, node* ptr){

        if(ptr != NULL){
                if(ptr->data != value){
                    position++;
                    position = searchlist(value, ptr->next);
                }
                else{
                    return position;
                }
        }
        else{
            return 0;
        }
    }

    void del(int value){
        if(head != NULL){
            nullptr;
        }
    }
};

int main(){
    linkedlist* ll = new linkedlist();
    ll->insertnode(1);
    ll->insertnode(2);
    ll->insertnode(3);
    ll->insertnode(4);
    ll->insertnode(5);
    ll->insertnode(6);
    ll->insertnode(7);
    ll->insertnode(8);
    ll->insertnode(9);
    ll->insertnode(10);

    ll->printtree();
    ll->search(6);
    return 0;

}
