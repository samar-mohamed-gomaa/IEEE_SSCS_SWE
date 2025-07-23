#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 100 
#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int items[MAX_SIZE]; 
    int front;           
    int rear;           
    int count;           
} Queue;

void initialize(Queue *q);
int isEmpty(Queue *q);
int size(Queue *q);
void enqueue(Queue *q, int item);
int dequeue(Queue *q);
int front(Queue *q);
void clear(Queue *q);

#endif
