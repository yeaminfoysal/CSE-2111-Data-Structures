#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void begin_insert();

int main()
{
    begin_insert();
};

void begin_insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("enter a value");
        scanf("%d", &item);

        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}