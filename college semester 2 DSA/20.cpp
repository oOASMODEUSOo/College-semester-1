#include <iostream>
#include <queue>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right; 
    node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL; 
    }
};

void buildFromLevel(node* &root){   //this function just builds the tree level by level
    queue<node*> q;                 //created a queue 
    cout << "enter data for root";  //asking for the data
    int data;                       //data variable
    cin >> data;                    //inputing
    root = new node(data);          //root was a null pointer and now we called the node constructor inside it
    q.push(root);                   //pushing the root inside the queue
 
    while (!q.empty()){             //condition to check the empty queue
        node* temp = q.front();     //put the peek element into the queue 
        q.pop();                    //and remove that element from the queue
 
        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;            //taking the data for the left side of the root node

        if (leftData != -1){        //if the data entered is not null
            temp->left = new node(leftData);    //then call the constructor for the NULL
            q.push(temp->left);     //pushing the element into the queue
        }

        cout << "Enter right node for: " << temp->data << endl;  //asking for the data in the right 
        int rightData;  
        cin >> rightData;           //inputing the data

        if (rightData != -1){       //if the data entered is not null
            temp->right = new node(rightData);  
            q.push(temp->right);
        }
    }
    
}

void inOrder(node* root){   //LNR  L is go left N is node(print) R is go right
    //base case
    if (root == NULL){      //base case says that if we find a NULL then just exit out of the function 
        return;
    }

    inOrder(root->left);    //this recursive call keeps traversing to left side
    cout << root->data;     //when the recursive call fails then it prints the value of the node
    inOrder(root->right);   //this recursive call keeps traversing to the right side of the node
}

void postOrder(node* root){ //LRN  L is go left R is go right N is node(print)
    //base case
    if (root == NULL){      //base case says that if we find a NULL then just exit out of the function
        return;
    }

    postOrder(root->left);  //this recursive call keeps traversing to left side
    postOrder(root->right); //this recursive call keeps traversing to the right side of the node
    cout << root->data;     //when the recursive call fails then it prints the value of the node
}

void preOrder(node* root){  //NLR  N is node(print) L is go left R is go right
    //base case
    if (root == NULL){      //base case says that if we find a NULL then just exit out of the function
        return;
    }

    cout << root->data;     //when the recursive call fails then it prints the value of the node
    preOrder(root->left);   //this recursive call keeps traversing to left side
    preOrder(root->right);  //this recursive call keeps traversing to the right side of the node
}

   

int main(){
    
    //data = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    node* root = NULL;  //created an empty NULL ptr of type node 
    buildFromLevel(root);

    cout << "Printing the tree in level Order traversal mode";
    inOrder(root);
    postOrder(root);
    preOrder(root);

    return 0;
}