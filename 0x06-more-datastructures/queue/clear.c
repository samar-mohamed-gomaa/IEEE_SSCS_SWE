#include "queue.h"

void clear(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

