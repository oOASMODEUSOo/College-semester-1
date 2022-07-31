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

void frontAdd(node** head_ref, int data_enter){
    node* new_node = new node(); 
    new_node->val = data_enter;  
    new_node->next = *head_ref; 
    *head_ref = new_node;  
}

void middleAdd(node* prev_node, int data){

    if (prev_node->next == NULL){  
        cout << "previous node cant be NULL" << endl;
    }

    node* new_node = new node(); 
    new_node->val = data; 
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void endAdd(node** head_ref, int data){
    node* new_node = new node();  
    node* last = *head_ref;  
    new_node->val = data; 
    new_node->next = NULL;

    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL){
        last = last->next;
    }
    
    last->next = new_node;
    return;
}

void deleteNode(node** head_ref, int key){

    node* temp = *head_ref; 
    node* prev = NULL;  
    if (temp != NULL && temp->val == key){  
        *head_ref = temp->next;  
        delete temp;           
        return;     
    }

    else{   
        while (temp != NULL && temp->val != key){      
            prev = temp;    
            temp = temp->next;  
        }
    }

    if (temp == NULL){   
        return;     
    }

    prev->next = temp->next;    
    delete temp;  
}

int main(){
    
    node* head = NULL;
    endAdd(&head, 6);
    frontAdd(&head, 7);
    frontAdd(&head, 1);
    endAdd(&head, 4);
    middleAdd(head->next, 8);
    printLL(head);    
    return 0;
}