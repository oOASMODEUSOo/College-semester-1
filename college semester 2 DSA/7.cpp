#include <iostream>

using namespace std;

class node{
    public:
        int val;
        node* next;
};

void printLL(node* n){
    while (n!=NULL){
        cout << n->val << endl;
        n = n->next;
    }
}

int main(){
    
    node* head = NULL;
    node* second = NULL;   
    node* third = NULL;

    head = new node();
    second = new node();  
    third = new node();

    head->val = 1;
    head->next = second;

    second->val = 2;
    second->next = third;

    third->val = 3;
    third->next = NULL;  

    printLL(head);

    return 0;
}