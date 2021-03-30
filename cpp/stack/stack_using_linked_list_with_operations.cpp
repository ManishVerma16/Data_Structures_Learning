#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top=NULL;

public:
    void push(int value);
    int pop();
    void display();
    int peek(int pos);
    int stackTop();
    int isEmpty();
    int isFull();
};

void Stack::push(int value)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        t->data = value;
        t->next = top;
        top = t;
    }
}

int Stack::pop()
{
    Node *p;
    int value = 0;
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        p = top;
        top = top->next;
        value = p->data;
        delete p;
    }
    return value;
}

void Stack::display()
{
    Node *p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int Stack::peek(int pos)
{
    Node *p = top;
    for (int i = 0; i < pos - 1 && p != NULL; i++)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        return p->data;
    }
    else
    {
        return -1;
    }
}

int Stack::isEmpty()
{
    if (top)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int Stack::isFull()
{
    Node *t = new Node;
    int r = t ? 1 : 0;
    free(t);
    return r;
}

int main()
{
    Stack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.display();
    return 0;
}
