#include <iostream>

using namespace std;

class Stack{
    public:
        int *stk;
        int size;
        int top;

    Stack(int size){
        this->size = size;
        stk = new int[size];
        this->top = -1;
    }

    void push(int element){
        if(size - top > 1){
            this->top = top + 1;
            stk[top] = element;
        }
        else{
            cout << "overflow";
        }
    }

    void pop(){
        if (top >= 0){
            stk[top] = 0;
            this->top = top - 1;
        }
        else{
            cout << "empty";
        }
    }

    void peek(){
        if (top > -1)
            cout << stk[top];
        else{
            cout << "empty";
        }
    }

    bool isEmpty(){
        if (top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    Stack stack(5);

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.peek();
    stack.pop();
    stack.peek();
    stack.pop();
    stack.pop();
    stack.peek();

    return 0;
}