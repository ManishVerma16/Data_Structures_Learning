#include<iostream>

using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

class LinkedList {
    private:
        Node *first;
    public:
        LinkedList(){
            first = NULL;
        }
        LinkedList(int A[], int n);
        ~LinkedList();

        void Display();
        void Insert(int index, int value);
        int Delete(int index);
        int Length();
        
};

LinkedList::LinkedList(int A[], int n){
    Node *last, *t;
    int i = 0;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

LinkedList::~LinkedList()
{
    Node *p=first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
    
}

void LinkedList::Display(){
    Node *p = first;
    while (p)
    {
        cout << p->data <<" ";
        p = p->next;
    }
    cout << endl;
}

int LinkedList::Length(){
    Node *p = first;
    int count = 0;
    while (p)
    {
        count++;
        p=p->next;
    }
    return count;
}

void LinkedList::Insert(int index, int value){
    Node *p=first, *t;
    if(index<0 || index>Length()){
        return;
    }
    t = new Node;
    t->data = value;
    t->next = NULL;

    if(index == 1){
        t->next = first;
        first = t;
    }
    else{
        for (int i = 0; i < index-1 && p; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;        
    }
}

int LinkedList::Delete(int index){
    Node *p, *q=NULL;
    int value = -1;
    p = first;
    if(index<0 || index>Length()){
        return 0;
    }
    if(index == 1){
        first = first->next;
        value = p->data;
        delete p;
    }
    else{
        for (int i = 0; i < index-1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        value = p->data;
        delete p;        
    }
    return value;
}

int main()
{
    int A[] = {1,2,3,4,5};
    LinkedList L(A,5);
    L.Display();
    cout << L.Length() <<endl;
    L.Insert(5, 10);
    L.Display();
    cout << L.Delete(6)<<endl;
    L.Display();
    cout << L.Length() <<endl;
    L.Insert(5, 15);
    L.Insert(6, 17);
    L.Display();
    cout << L.Delete(6)<<endl;
    L.Display();
    return 0;
}
