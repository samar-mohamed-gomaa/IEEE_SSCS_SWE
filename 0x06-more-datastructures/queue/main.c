#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
    Queue q;
    initialize(&q);
    
    printf("Is queue empty? %s\n", isEmpty(&q) ? "Yes" : "No");
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    
    printf("Front element: %d\n", front(&q));
    printf("Queue size: %d\n", size(&q));
    
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    
    enqueue(&q, 40);
    
    printf("Queue size after operations: %d\n", size(&q));
    
    clear(&q);
    printf("Is queue empty after clear? %s\n", isEmpty(&q) ? "Yes" : "No");
    
    return 0;
}
