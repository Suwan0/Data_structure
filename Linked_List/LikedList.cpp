# include <iostream>
# include <string>
# include <vector>

using namespace std;

struct node {
    int data;
    node* nextNode;
};

class LinkedList {
private:
    node* head;
    node* tail;

public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }    
    //첫번째 노드의 추가
    void addFrontNode(int n);

    void addNode(int n);

    void insertNode(node* prevNode, int n);

    void deleteNode(node* prevNode);

    node* getHead() {
        return head;
    }
    
    void display(node* head);
};

//node 추가
void LinkedList::addFrontNode(int n){
    node* temp = new node;

    temp -> data = n;

    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->nextNode = head;
        head = temp;
    }
}

//마지막 node의 추가
void LinkedList::addNode(int n){
    node* temp = new node;

    temp-> data = n;

    temp->nextNode = NULL;

    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail->nextNode = temp;
        tail = temp;
    }
}

void LinkedList::insertNode(node* prevNode, int n){
    node* temp = new node;
    
    temp-> data = n;

    temp->nextNode = prevNode->nextNode;

    prevNode->nextNode = temp->nextNode;
}

void LinkedList::deleteNode(node* prevNode){
    
    node* temp = prevNode->nextNode;

    prevNode->nextNode = temp->nextNode;

    delete temp;
}

void LinkedList::display(node*head)
{
    if(head == NULL){
        cout << "\n";
    }
    else {
        cout << head->data << " ";
        display(head->nextNode);
    }
    cout << endl;
}


