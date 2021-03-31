#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    Node *next;
};

struct Node *top = NULL;

void push(int value)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
    {
        printf("Stack is full\n");
    }
    else
    {
        t->data = value;
        t->next = top;
        top = t;
    }
}

int pop()
{
    struct Node *t;
    int x = -1;
    if (top == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete (t);
    }
    return x;
}

void display()
{
    struct Node *t = top;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main()
{
    push(10);
    push(11);
    push(12);
    display();
    printf("%d \n",pop());
    display();
    return 0;
}
