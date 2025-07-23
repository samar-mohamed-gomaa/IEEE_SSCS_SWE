#include "queue.h"

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow!\n");
        exit(EXIT_FAILURE);
    }
    
    int item = q->items[q->front];
    q->front++;
    q->count--;
    
    if (isEmpty(q)) {
        q->front = 0;
        q->rear = -1;
    }
    
    return item;
}
