#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

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

void Display(struct Node *p){
    while (p!=0)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
    
}

int count(struct Node *p){
    int l = 0;
    while (p != 0)
    {
        l += 1;
        p = p->next;
    }
    return l;
}
/*
void Insert(struct Node *p, int index, int value){
    struct Node *t;
    if (index < 0 || index > count(p))
    {
        return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    if(index == 0){
        t->next = first;
        first = t;
    }
    else if(index > 0){
        p = first;
        for (int i = 0; i < index-1; i++)
        {
            p = p->next;
        }
        if (p)
        {
            t->next = p->next;
            p->next = t;
        }
    }
}
*/

void Insert(struct Node *p, int index, int value){
    struct Node *t;
    if(index <0 || index > count(p)){
        return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    if(index == 0){
        t->next = first;
        first = t;
    }
    else if(index > 0){
        p = first;
        for (int i = 0; i < index-1 && p; i++)
        {
            p = p->next;
        }
        if(p)
        {
            t->next = p->next;
            p->next = t;
        }
    }
}

int main()
{
    int A[5] = {2, 4, 5, 6, 8};
    struct Node *x;
    create(A, 5);
    Display(first);
    Insert(first, 4, 125);
    Display(first);
    return 0;
}
