#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Queue{
    int front;
    int rear;
    int size;
    int *Q;
};

void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q, int value){
    if(q->rear == q->size-1){
        printf("Queue is Full!\n");
    }
    else{
        q->rear += 1;
        q->Q[q->rear] = value;
    }
}

int dequeue(struct Queue *q){
    int value = -1;
    if(q->front == q->rear){
        printf("Queue is Full!\n");
    }
    else{
        q->front += 1;
        value = q->Q[q->front];
    }
    return value;
}

void display(struct Queue q){
    for (int i = q.front+1; i <=q.rear; i++)
    {
        printf("%d ", q.Q[i]);
    }
    printf("\n"); 
}

int main()
{
    struct Queue q;
    // printf("Enter the size of Queue: ");
    // scanf("%d",&q->size);
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 12);
    enqueue(&q, 13);
    display(q);
    return 0;
}
