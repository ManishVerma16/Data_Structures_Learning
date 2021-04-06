#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;
    int *Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new int[size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];
    }
    void enqueue(int value);
    int dequeue();
    void display();
};

void Queue::enqueue(int value){
    if (rear == size-1){
        cout<< "Queue is Full!"<< endl;
    }
    else{
        rear += 1;
        Q[rear] = value;
    }
}

int Queue::dequeue(){
    int value = -1;
    if (rear == front){
        cout<< "Queue is Empty!"<< endl;
    }
    else{
        front += 1;
        value = Q[front];
    }
    return value;
}

void Queue::display(){
    for (int i = front+1; i <=rear; i++)
    {
        cout<< Q[i] << " ";
    }
    cout << endl;
}

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(45);
    q.enqueue(55);
    q.display();
    cout << q.dequeue() << endl;
    q.display();

    return 0;
}
