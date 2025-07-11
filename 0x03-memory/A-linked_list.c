#include <stdio.h>
#include <stdlib.h>


struct Node {
    int value;
    struct Node *next;
};


struct Node* create_node(int value) {
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

void append_node(struct Node **head, int value) {
    struct Node *new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct Node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
}

void print_list(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}


void free_list(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    struct Node *head = NULL;

    
    append_node(&head, 10);
    append_node(&head, 20);
    append_node(&head, 30);

    
    printf("Linked List: ");
    print_list(head);
    free_list(head);

    return 0;
}
