// Week7_ReversePrint.c
// Program to reversely print out elements of an array.

#include <stdio.h>
#define MAX_SIZE 10

void reversePrint(int [], int);

int main(void)
{
	int i, size,
		arr[MAX_SIZE]; // define array according to max possible size

	printf("Enter size of array (<=10): ");
	scanf("%d", &size);

	printf("Enter %d elements: ", size);

	for (i=0; i<size; i++)
	{   
		scanf("%d", &arr[i]);

		/* You may read and store data into array directly,
		   or use a variable to hold the input temporarily,
		   and assign it to an array slot thereafter.
		   The above way is more commonly used */

		// scanf("%d", &value);
		// arr[i] = value;
	}   

	reversePrint(arr, size);
	return 0;
}

void reversePrint(int arr[], int size)
{
	printf("Reverse printing: ");
	int i;
	for(i=size-1; i>=0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");		   
}
