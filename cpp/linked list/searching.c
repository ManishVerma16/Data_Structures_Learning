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
/*
struct Node *LinearSearch(struct Node *p, int key)
{
    while (p != 0)
    {
        if (key == p->data)
        {
            return (p);
        }
        p = p->next;
    }
    return NULL;
}
*/
struct Node *LinearSearchRecusive(struct Node *p, int key){
    if(p == NULL){
        return NULL;
    }
    if(key == p->data){
        return p;
    }
    else{
        return LinearSearchRecusive(p->next, key);
    }
}

// Improvement
struct Node *LinearSearch(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p != 0)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

void Display(struct Node *p){
    while (p!=0)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    
}

int main()
{
    int A[5] = {2, 4, 5, 6, 8};
    struct Node *x;
    create(A, 5);
    // x = LinearSearchRecusive(first, 4);
    x = LinearSearch(first, 8);
    if (x)
    {
        printf("%d is found\n", x->data);
    }
    else {
        printf("key not found \n");
    }
    Display(first);
    return 0;
}
