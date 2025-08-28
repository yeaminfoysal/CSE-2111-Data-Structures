/*
CSE2111 Data Structures.
In this program we will learn the basics
of a pointer.

*/

#include <stdio.h>
int* function_array()
{
	int arr[]={12, 67, 43, 77, 59};//creating a local array of integer type
	return arr;
}

int main()
{

	int num1;		//Declaring an integer with no assigned value
	int *ptr_num1;	//Declaring a pointer with no assigned address
	int *array;//Declaring a pointer with no assigned address
	
	num1 = 33;		//Storing 33 in integer type variable
	ptr_num1 = &num1;//Storing the address of num1 in pointer type variable
	
	printf("\nPrinting the value of num1 %d", num1);
	printf("\nPrinting the value of ptr_num1 %p", ptr_num1);
	printf("\nPrinting the value of what ptr_num1 points to %d", *ptr_num1);
	printf("\nPrinting the address of ptr_num1 %p", &ptr_num1);
	
	//array = function_array(); //receiving the address of local array arr
	//printf("\n\nPrinting index 0 of arr %d", array[0]);
	//printf("\nPrinting index 2 of arr %d", *(array+2));

	return 0;
}
