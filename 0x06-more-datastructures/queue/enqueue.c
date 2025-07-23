#include "queue.h"

void enqueue(Queue *q, int item) {
    if (q->rear == MAX_SIZE - 1) {  
        printf("Queue is full!\n");
        return;
    }
    
    q->rear++;
    q->items[q->rear] = item;
    q->count++;
}
