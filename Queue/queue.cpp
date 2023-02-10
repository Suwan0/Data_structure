# include <iostream>

using namespace std;

class Queue {
private:
    int maxQueueSize;
    int queue[100]={};
    int front;
    int rear;

public:
    Queue(int maxSize):maxQueueSize(maxSize)
    {
        this->front = -1;
        this->rear = -1;
    };
    void isEmpty();
    void isFull();
    void push(int item);
    void pop();
    void showQueue();
};

void Queue::isEmpty(){
    if(front == rear){
        cout << "Is Empty" << endl;
    }
}

void Queue::isFull(){
    if(rear == maxQueueSize-1){
        cout << "Is Full" << endl;
    }
}

void Queue::push(int item){
    if(rear == maxQueueSize-1){
        isFull();
    }
    else{
        queue[++rear] = item;
        cout << rear << "번째에 " << item << "push \n";
    }
}

void Queue::pop(){
    if(front == rear){
        isEmpty();
    }
    else{
        ++front;
        cout << front << "번째에 " << queue[front] << "pop\n";
    }
}

void Queue::showQueue(){
    if(front==rear){
        isEmpty();
    }
    else{
        for(int i =0; i<maxQueueSize; i++){
            cout << queue[i] << ' ' ;
        }   
        cout << endl;
    }
}

