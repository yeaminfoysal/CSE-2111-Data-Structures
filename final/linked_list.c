#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void begin_insert();
void last_insert();
void begin_delete();
void last_delete();
void display();

int main()
{
    begin_insert();
    last_insert();
    begin_delete();
    last_delete();
    display();
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

void last_insert()
{
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

void begin_delete()
{
    struct node *ptr;

    if (head == NULL)
    {
        printf("empty");
    }
    else
    {

        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted from the begining ...\n");
    }
}

void last_delete(){
    struct node *ptr, *ptr1;

        if (head == NULL)
    {
        printf("\nlist is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    } 
    else{
        ptr = head;

        while(ptr->next != NULL){
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
    }
};

void display(){
    struct node *ptr;

    ptr = head;

    if(ptr == NULL){
        printf("Nothing to print");
    } else{

        while(ptr->next != NULL){
            printf("%d", ptr->data);
            ptr = ptr->next;
        }
    }
}