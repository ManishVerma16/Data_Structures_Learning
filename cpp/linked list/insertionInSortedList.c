#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i<n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
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

void Insert(struct Node *p, int value){
    p = first;
    struct Node *q = NULL, *t=NULL;
    while (p->data < value && p)
    {
        q = p;
        p = p->next;
    }
    t = new Node;
    t->data = value;
    t->next = q->next;
    q->next = t;    
}

int main()
{
    int A[5]= {3,5,7,8,10};
    create(A, 5);
    Display(first);
    cout << endl;
    Insert(first, 6);
    Display(first);
    return 0;
}
