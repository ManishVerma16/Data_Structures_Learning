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


int maximum(struct Node *p){
    int max = -32768;
    while (p)
    {
        if(max<p->data){
            max = p->data;
        }
        p = p->next;

    }
    return max;
}

int maximumRecursive(struct Node *p){
    int max = -32768;

    if (p==0)
    {
        return -32768;
    }
    else {
        max = maximumRecursive(p->next);
        if(max>p->data){
            return max;
        }
        else{
            return p->data;
        }
    }
    return max;
}

int minimum(struct Node *p){
    int min = 32767;
    while (p)
    {
        if(min > p->data){
            min = p->data;
            p = p->next;
        }
    }
    return min;
}

int minimumRecursive(struct Node *p){
    int min = 32767;
    if (p==0)
    {
        return 32767;
    }
    else {
        min = minimumRecursive(p->next);
        if(min < p->data){
            return min;
        }
        else{
            return p->data;
        }
    }
    return min;
}

int main()
{
    int A[5] = {2,4,5,6,8};
    create(A, 5);
    printf("max : %d", maximum(first));
    printf("\nMaxRecursive : %d", maximumRecursive(first));
    // printf("min : %d", minimum(first));
    printf("\nMinRecursive : %d", minimumRecursive(first));
    return 0;
}
