#include <stdio.h>
#define MAX 5

int mystack[MAX], top = -1;

//----------------------------------------------------
// This function pushes an element on top of the array
//----------------------------------------------------
void push(int mystack[], int val)
{
    if (top == MAX-1)
    {
        printf("\n STACK OVERFLOW");
    }
    else
    {
        top++;
        mystack[top] = val;
    }
}

//----------------------------------------------------
// This function pops an element from the top of the array
// and returns the element popped
//----------------------------------------------------
int pop(int mystack[])
{
    int val;
    if (top == -1)
    {
        printf("\n STACK OVERFLOW");
        return -1;
    }
    else
    {
        val = mystack[top];
        top--;
        return val;
    }
}

//----------------------------------------------------
//This function prints the entire stack
//----------------------------------------------------

void display(int mystack[])
{
	int i;
	if(top == -1)
	{
		printf("\n STACK IS EMPTY");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n %d",mystack[i]);
		}
		printf("\n"); // Added for formatting purposes
	}
}

int main()
{
	display(mystack);	//displaying entire stack
	push(mystack, 5);	//pushing 5 on stack
	push(mystack, 23);	//pushing 23 on stack
	push(mystack, 12);	//pushing 12 on stack
	display(mystack);	//displaying entire stack
	pop(mystack);		//popping stack top
	display(mystack);	//displaying entire stack
	// push(mystack, 61);	//pushing 61 on stack
	// display(mystack);	//displaying entire stack
	// printf("\nCurrent stack top is %d", peek(mystack));	//printing stack top

	return 0;
}
