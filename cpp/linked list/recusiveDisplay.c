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
    if (p != NULL)
    {
        printf("%d ", p->data);
        Display(p->next);
    }
}

void ReverseDisplay(struct Node *p){
    if (p != NULL)
    {
        ReverseDisplay(p->next);
        printf("%d ", p->data);
    }
}

int main()
{
    int A[5] = {2,4,5,6,8};
    create(A, 5);
    Display(first);
    printf("\nReverse Display \n");
    ReverseDisplay(first);

    return 0;
}
