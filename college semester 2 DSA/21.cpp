#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertIntoBST(node* root, int data){
    //base case
    if (root == NULL){
        root = new node(data);
        return root;
    }

    if (data > root->data){
        root->right = insertIntoBST(root->right, data);
    }

    else{
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void takeInput(node* &root){
    int data;
    cin >> data;
    while (data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
    cout << "Tree created successfully" << "\n";
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            cout << endl;
            if(!q.empty()) { 
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

node* minVal(node* root){
    node* temp = root;
    while (temp->left == NULL){
        temp = temp->left;
    }
    return temp;
}

node* deleteInBST(node* root, int key){
    if (root == NULL){
        return root;
    }

    if (root->data == key){
        //0 child
        if (root->left == NULL and root->right == NULL){
            delete root;
            return NULL;
        }
        //1 child
        if (root->left != NULL and root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL and root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        //2child
        if (root->left != NULL and root->right != NULL){  
            int minValue =  minVal(root)->data;
            root->data = minValue;
            root->right = deleteInBST(root->right, minValue);
            return root;
        }
    }
    else if(root->data > key){
        root->left = deleteInBST(root->left, key);
        return root;
    }
    else if(root->data < key){
        root->right = deleteInBST(root->right, key);
        return root;
    }
}

int main(){
    node* root = NULL;
    takeInput(root);
    levelOrderTraversal(root);
    insertIntoBST(root, 5);
    levelOrderTraversal(root);
    return 0;
}