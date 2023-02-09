//linked_list를 이용한 stack의 구현

#include <iostream>
#include "linked_list.cpp"


using namespace std;

class Stack{
private:
    node* topNode;
    int dataSize=10;

public:
    Stack(){
        topNode = NULL;
        dataSize = 0;
    };
    
    bool isFull();
    bool isEmpty();
    void push(int item);
    void pop();
    void showStack();
};


bool Stack::isFull(){
    if(dataSize == 10){
        cout << "Stack is Full" << endl;
        return true;
    }
    else{
        return false;
    }
}

bool Stack::isEmpty(){
    if(topNode == NULL){
        cout << "Stack is empty" << endl;
        return true;
    }
    else{
        return false;
    }
}

void Stack::push(int item){
    node* temp = new node;
    
    temp->data = item;
    temp->nextNode = topNode;
    topNode = temp;
    dataSize++;
}

void Stack::pop(){
    if(topNode == NULL){
        cout << "stack underflow" << endl;
    }
    else{
        topNode = topNode->nextNode;
    }
}

void Stack::showStack(){
    node* temp = new node;

    if(topNode == NULL){
        cout << "Stack is empty" << endl;
    }
    else{
        temp = topNode;
        while(temp != NULL){
            cout << "Stack elemet : " << temp->data << endl;
            temp = temp->nextNode;
        }
    }
    cout << endl;
}


int main() {

    Stack a;

    a.showStack();
    a.push(1);
    a.push(2);
    a.push(3);

    a.showStack();

    a.pop();
    a.pop();

    a.showStack();

    a.push(5);
    a.showStack();

    return 0;

}
