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

    node* new_node = new node();  //created a new node

    new_node->val = data_enter;  //entering the data in the new node

    new_node->next = *head_ref;  //Make next of new node as head

    *head_ref = new_node;  //move the head to point to the new node
}

void middleAdd(node* prev_node, int data){

    if (prev_node->next == NULL){  //checking for empty previous node
        cout << "previous node cant be NULL" << endl;
    }

    node* new_node = new node();  //creating a new node for the new value

    new_node->val = data;  //entering the new data 

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void endAdd(node** head_ref, int data){
    node* new_node = new node();  //new node created

    node* last = *head_ref;  //this is used in the process

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

    node* temp = *head_ref;  //created a temp pointer with dereference to the headref provided
    node* prev = NULL;  //prev node created and entered NULL in its next

    if (temp != NULL && temp->val == key){  //check if the node with the value
        *head_ref = temp->next;  //if found headref me temp ke next ka value daal do
        delete temp;            //free the memory
        return;                //and exit the func
    }

    else{  //if the head isnt the key we were looking for 
        while (temp != NULL && temp->val != key){      //then run a loop to find where the key is
            prev = temp;    //when found put the whole value of temp into prev 
            temp = temp->next;  //and in temp put adress jo temp ke next me pada hai
        }
    }

    if (temp == NULL){  //temp if found null 
        return;     //then exit of the function 
    }

    prev->next = temp->next;    //
    delete temp;  //delete the temp pointer created

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