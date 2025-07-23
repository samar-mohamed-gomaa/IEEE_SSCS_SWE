#include "queue.h"

int front(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        exit(EXIT_FAILURE);
    }
    return q->items[q->front];
}
