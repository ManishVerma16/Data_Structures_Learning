#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void Insert(int value){
    struct Node *t, *last;
    t = new Node;
    t->data = value;
    t->next = NULL;
    if(first == NULL){
        first = last = t;
    }
    else{
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p){
    while(p != 0){
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    Insert(5);
    Insert(6);
    Insert(10);

    Display(first);
    return 0;
}
