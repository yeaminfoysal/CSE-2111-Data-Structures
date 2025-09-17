#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void begin_insert();
void last_insert();

int main()
{
    begin_insert();
    last_insert();
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

void last_insert(){
    struct node *ptr, *temp;
    int val;

    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("oveerflow");
    }
    else
    {

        scanf("%d", &val);
        ptr->data = val;

        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted");
        }
        else
        {

            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted");
        }
    }
}