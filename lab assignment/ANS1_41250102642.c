#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];   // queue array
int rear = -1;    // rear index
int size = 0;     // current size

void enqueue();
void dequeue();
void display();

int main() {
    int choice;
    while (1) {
        printf("\nChoose an option:\n");
        printf("(1) Enqueue\n");
        printf("(2) Dequeue\n");
        printf("(3) Display\n");
        printf("(4) Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: printf("Thank you.\n"); exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

// Enqueue function
void enqueue() {
    if (size == MAX) {
        printf("Queue is full\n");
        return;
    }
    int num;
    printf("Enter a number to enqueue: ");
    scanf("%d", &num);

    rear++;
    queue[rear] = num;
    size++;
    display();
}

// Dequeue function
void dequeue() {
    if (size == 0) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = 0; i < rear; i++) {
        queue[i] = queue[i + 1]; // shift left
    }
    rear--;
    size--;
    display();
}

// Display function
void display() {
    if (size == 0) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
