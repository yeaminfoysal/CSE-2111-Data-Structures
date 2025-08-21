#include <stdio.h>
#define MAX 5

//--------------------------------------------
// This function displays contents of the array
//--------------------------------------------
void display_array(int arr[])
{
    printf("\nARRAY: ");

    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", arr[i]);
    }
}

//-----------------------------------------
// This function inserts element by position
//-----------------------------------------

int insert_element_by_position(int arr[], int value, int position)
{
    int index = position - 1;

    if (index < 1 || index > MAX)
    {
        printf("\nThe position selected for insertion is outside the array.");
        return -1; // returning -1 to indicate
    }

    if (MAX == 1)
    {
        arr[MAX - 1] = value;
        printf("\nElement %d was added in position %d.", value, position);
        return 0;
    }

    for (int i = MAX - 1; i <= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = value;

    return 0;
}

//-----------------------------------------
//This function deletes element by position
//-----------------------------------------

int delete_element_by_position(int arr[], int position)
{
	int index = position - 1;
	int i;
	
	if(position < 1 || position > MAX)
	{
		printf("\nThe position selected for deletion is outside the array.");
		return -1;
	}

	if(MAX == 1)
	{
		arr[MAX-1] = -1;
		printf("\nElement in position %d was deleted.", position);
		return 0; 
	}

	for(i = index; i<MAX-1; i++)
	{
		arr[i] = arr[i+1];
	}
	arr[MAX-1] = -1;
	printf("\nElement in position %d was deleted.", position);
	
	return 0;		
	
	
}

//-----------------------------------------
// This function deletes element by value
//-----------------------------------------

int delete_element_by_value(int arr[], int rem_value)
{
    int i;
    int rem_index;
    int found = 0;

    for (i = 0; i < MAX; i++)
    {
        if (arr[i] == rem_value)
        {
            rem_index = i;
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nGiven value %d to be removed was not found.", rem_value);
        return -1;
    }

    for (i = rem_index; i <= MAX - 2; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[MAX - 1] = -1; // setting the last item as -1

    printf("\nElement %d was removed.", rem_value);

    return 0;
}

int main()
{
    int arr[] = {23, 77, 24, 65, 55};
    display_array(arr);

    // insert_element_by_position(arr, 89, 3); // insert 89 in position 3
    // display_array(arr);

    // delete_element_by_value(arr, 23);
    // display_array(arr);

    delete_element_by_position(arr, 6);
    display_array(arr);

    return 0;
}