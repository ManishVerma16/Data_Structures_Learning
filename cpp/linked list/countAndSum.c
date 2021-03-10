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

int countNode(struct Node *p){
    int c = 0;
    while (p)
    {
        c += 1;
        p = p->next;
    }
    return c;
}

int countNodeRecursive(struct Node *p){
    if(p == 0){
        return 0;
    }
    else{
        return countNodeRecursive(p->next)+1;
    }
}


int Sum(struct Node *p){
    int x = 0;
    while (p)
    {
        x += p->data;
        p = p->next;
    }
    return x;
}

int SumRecursive(struct Node *p){
    if(p == 0){
        return 0;
    }
    else
    {
        return SumRecursive(p->next) + p->data;
    }
}

int main()
{
    int A[5] = {2,4,5,6,8};
    create(A, 5);
    printf("count : %d", countNode(first));
    printf("\ncountRecursive : %d", countNodeRecursive(first));
    printf("\nSum : %d", Sum(first));
    printf("\nSumRecursive : %d", SumRecursive(first));


    return 0;
}
