#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *s;

public:
    Stack()
    {
        size = 10;
        top = -1;
        s = new int[size];
    }
    Stack(int size)
    {
        this->size = size;
        top = -1;
        s = new int[this->size];
    }

    void display();
    void push(int value);
    int pop();
    int peek(int pos);
    int stackTop();
    int isEmpty();
    int isFull();
};

void Stack::display(){
    cout << "Element are: ";
    for (int i = top; i >= 0; i--)
    {
        cout << s[i] << " ";
    }
    cout<<endl;
}

void Stack::push(int value)
{
    if (top == size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        top += 1;
        s[top] = value;
    }
}

int Stack::pop()
{
    int value = -1;
    if (top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        value = s[top];
        top -= 1;
    }
    return value;
}

int Stack::peek(int pos)
{
    int value = -1;
    if (top - pos + 1 < 0)
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        value = s[top - pos + 1];
    }
    return value;
}

int Stack::stackTop()
{
    int value = -1;
    if (top == -1)
    {
        return -1;
    }
    else
    {
        value = s[top];
    }
    return value;
}

int Stack::isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Stack::isFull()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int size=0, data=0;
    cout << "Enter size: ";
    cin>> size;
    Stack st(size);
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin>>data;
        st.push(data);
    }
    st.display();

    return 0;
}
