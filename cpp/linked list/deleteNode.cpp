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

int Delete(struct Node *p, int pos){
    struct Node *q = NULL;
    int value;
    p = first;
    if(pos == 1){
        first = first->next;
        value = p->data;
        delete p;
    }
    else{
        for (int i = 0; i < pos-1 && p; i++)
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
    int A[5]= {3,5,7,8,10};
    create(A, 5);
    Display(first);
    cout << endl;
    Delete(first, 1);
    Display(first);
    cout << endl;
    Delete(first,4);
    Display(first);
    cout << endl;
    Delete(first,4);
    Display(first);
    cout << endl;
    return 0;
}
