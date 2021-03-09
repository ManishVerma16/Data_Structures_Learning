// Hare And Tortoise Algorithm
// Floyd Closed Loop Detection Algorithm

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

int isLoop(struct Node *f){
    struct Node *p, *q;
    p = q = f;
    do
    {
        p=p->next;
        q = q->next;
        q = q?q->next:NULL;
    } while (p&&q && p!=q);
    return p==q?true:false;
    
}

int main()
{
    struct Node *t1, *t2;
    int A[5]= {3,5,7,8,10};
    create(A, 5);
    Display(first);
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;
    isLoop(first)? cout<<"Loop is present":cout<<"Loop not present";

    return 0;
}
