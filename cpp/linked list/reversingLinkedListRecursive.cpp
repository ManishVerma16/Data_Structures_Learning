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

void Reverse(struct Node *q, struct Node *p){
    if(p != NULL){
        Reverse(p, p->next);
        p->next = q;
    }
    else{

    first = q;
    }
}
int main()
{
    int A[5]= {3,5,7,8,10};
    create(A, 5);
    Display(first);
    cout << endl;
    Reverse(NULL, first);
    Display(first);
    return 0;
}
