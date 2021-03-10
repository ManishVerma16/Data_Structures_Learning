#include <stdio.h>
#include <stdlib.h>
#include <iostream>
// #include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL, *second = NULL, *third = NULL;

void Display(struct Node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(int A[], int n)
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Concate(struct Node *p, struct Node *q)
{
    third = p;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *last = NULL;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        last->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        last->next = NULL;
    }
    while (p != NULL && q != NULL)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if(p!=NULL){
        last->next = p;
    }
    else {
        last->next = q;
    }
}

int main()
{
    int A[] = {3, 7, 9, 11, 14};
    int B[] = {5, 6, 10, 13, 20};
    create(A, 5);
    create2(B, 5);
    Display(first);
    cout << endl;
    Display(second);
    cout << endl;
    Concate(first, second);
    cout << "Concatenate : ";
    Display(third);
    cout << endl;
    create(A, 5);
    create2(B, 5);
    cout << "Merge : ";
    Merge(first, second);
    Display(third);
    return 0;
}
