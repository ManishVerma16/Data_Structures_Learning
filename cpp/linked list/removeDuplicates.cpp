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

void removeDuplicate(struct Node *p){
    struct Node *q = first->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
        }     
    }
    
}

int main()
{
    int A[5]= {5,5,7,7,7};
    create(A, 5);
    Display(first);
    cout << endl;
    removeDuplicate(first);
    Display(first);
    return 0;
}
