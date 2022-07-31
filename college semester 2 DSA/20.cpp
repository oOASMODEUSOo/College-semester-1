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

void buildFromLevel(node* &root){   
    queue<node*> q;                 
    cout << "enter data for root";  
    int data;                       
    cin >> data;                    
    root = new node(data);          
    q.push(root);                   
 
    while (!q.empty()){             
        node* temp = q.front();     
        q.pop();                    
 
        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;            

        if (leftData != -1){        
            temp->left = new node(leftData);    
            q.push(temp->left);     
        }

        cout << "Enter right node for: " << temp->data << endl;   
        int rightData;  
        cin >> rightData;           

        if (rightData != -1){      
            temp->right = new node(rightData);  
            q.push(temp->right);
        }
    }
}

void inOrder(node* root){   
    //base case
    if (root == NULL){       
        return;
    }

    inOrder(root->left);    
    cout << root->data;     
    inOrder(root->right);   
}

void postOrder(node* root){ 
    //base case
    if (root == NULL){      
        return;
    }

    postOrder(root->left);  
    postOrder(root->right); 
    cout << root->data;     
}

void preOrder(node* root){  
    //base case
    if (root == NULL){      
        return;
    }

    cout << root->data;     
    preOrder(root->left);   
    preOrder(root->right);  
}

int main(){
    
    //data = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    node* root = NULL;  
    buildFromLevel(root);

    cout << "Printing the inorder: ";
    inOrder(root);
    cout << endl;
    cout << "Printing the postorder: ";
    postOrder(root);
    cout << endl;
    cout << "Printing the preorder: ";
    preOrder(root);

    return 0;
}