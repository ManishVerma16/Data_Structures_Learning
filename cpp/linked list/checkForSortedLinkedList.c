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

int sortedList(struct Node *p){
    int minValue = INT32_MIN;
    while (p!=NULL)
    {
        if(p->data < minValue){
            return false;
        }
        else{
            minValue = p->data;
            p = p->next;
        }
    }
    return true;

/*
    
int sortedList(struct Node *p){
    int minValue = p->data;
    while (p!=NULL)
    {
        if(minValue <= p->data){
            minValue = p->data;
            p = p->next;
        }
        else{
            return false;
        }
    }
    return true;
}
}
*/

int main()
{
    int A[5]= {3,5,7,8,10};
    create(A, 5);
    Display(first);
    cout<<endl;
    sortedList(first) ? cout  << "Yes": cout <<"No";
    return 0;
}
