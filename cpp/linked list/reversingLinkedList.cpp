#include<iostream>

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


void Reverse(struct Node *p){
    struct Node *q=NULL, *r=NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}


/*
void Reverse(struct Node *p){
    struct Node *q=NULL, *r=NULL;
    p = first;
    while (p != NULL)
    {
        q = p->next;
        p->next = r;
        r = p;
        p = q;
    }
    first = r;
}
*/


int main()
{
    int A[5]= {3,5,7,8,10};
    create(A, 5);
    Display(first);
    Reverse(first);
    cout << endl;
    Display(first);
    return 0;
}
