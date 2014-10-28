// AY2013/4 Semester 1
//
// Mock PE2 Ex2: diagonalSum.c
//
// Name: 
// Matriculation number: 
// Description:

#include <stdio.h>
#define N 10

void read_matrix(int [][N], int *);
void compute_sum_of_diagonals(int [][N], int, int[]);
void print_sum_of_diagonals(int [], int);
void print_matrix(int [][N], int);

// YOU CAN ADD MORE CODE, BUT DO NOT CHANGE GIVEN CODE

int main(void)
{
	int size,
		arr[N][N] = {{0}}, // lower triangular matrix 
		sum[N] = {0};      // store sum of each diagonal

	read_matrix(arr, &size);
	
	// for debugging purpose
	// print_matrix(arr, size);
	
	compute_sum_of_diagonals(arr, size, sum);

	print_sum_of_diagonals(sum, size);

	return 0;
}

// Read in values of a matrix, return its size
void read_matrix(int arr[][N], int *size_p)
{
	// fill in your code
	int i, j;

	printf("Enter size: ");
	scanf("%d", size_p);

	printf("Enter values:\n");

	for(i=0; i<*size_p; i++)
	{
		for(j=0; j<=i; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

// Compute the sums of diagonals, store them into sum array
void compute_sum_of_diagonals(int arr[][N], int size, int sum[])
{
	// fill in your code
	int i, j;

	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i; j++)
		{
			sum[size-i-1] += arr[i+j][j];
		}
	}

}

// Print out the sum of diagonals
// Completed!
void print_sum_of_diagonals(int sum[], int size)
{
	int i;

	printf("Sum of diagonals:");
	for (i=0; i<size; i++)
		printf(" %d", sum[i]);
	printf("\n");
}


// print out matrix
// given, for testing purpose only
void print_matrix(int arr[][N], int size)
{
	int i, j;

	printf("print matrix:\n");
	for (i=0; i<size; i++)
	{
		for (j=0; j<=size; j++)
			printf(" %d", arr[i][j]);
		putchar('\n');
	}
}
