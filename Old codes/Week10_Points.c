// Week10_Points.c
//
// This program reads a list of points, sorts them by x-coordinates
// and y-coordinates, and computes the total length of horizontal and
// vertical lines if we trace the points in the sorted list.

#include <stdio.h>
#define MAX_POINTS 20

// function prototypes
void scanPoints(int [], int [], int *);
void printPoints(int [], int [], int);
void sortPoints(int [], int [], int);
int traceLines(int [], int [], int);

int main(void)
{
	int x[MAX_POINTS], y[MAX_POINTS]; // x- and y-coordinates of points
	int num_points; // actual number of points

	scanPoints(x, y, &num_points);
	// printf("Before sort:\n");
	// printPoints(x, y, num_points); // for checking

	sortPoints(x, y, num_points);

	printf("After sort:\n");
	printPoints(x, y, num_points); // for checking

	printf("Sum of lengths of vertical and horizontal lines = %d\n",
			traceLines(x, y, num_points));

	return 0;
}

// read points and assign to arrays x and y
void scanPoints(int x[], int y[], int *size_ptr)
{
	int i;

	printf("Enter number of points: ");
	scanf("%d", size_ptr);

	printf("Enter x- and y-coordinates of %d points:\n", *size_ptr);
	for (i=0; i<*size_ptr; i++) 
		scanf("%d %d", &x[i], &y[i]);
}

// sort the points in ascending order of x-coordinates and
// then y-coordinates, using Selection Sort.
void sortPoints(int x[], int y[], int size)
{
	int i, start_index, min_index, temp;
	for (start_index = 0; start_index < size-1; start_index++)
	{
		min_index = start_index;
		for (i = start_index+1; i < size; i++)
			// Point at index p is "less than" point at index q if the 
			// former has a smaller x-coordinate, or if their x-coordinates
			// are the same, then the former has a smaller y-coordinate.
			if ( x[i] < x[min_index]  /* compare point 'i' with point 'min_index' here */ 
				|| (x[i]==x[min_index] && y[i] < y[min_index] ))
				min_index = i;

		// swap x array
		temp = x[start_index];
		x[start_index] = x[min_index];
		x[min_index] = temp;
		// swap y array
		temp = y[start_index];
		y[start_index] = y[min_index];
		y[min_index] = temp;
	}
}


// trace lines on points in sorted array and compute the 
// sum of lengths of horizontal and vertical lines
int traceLines(int x[], int y[], int size)
{
	// this part is your take-home exercise


	return -1; // stub, to be replaced by your code
}

// print points
void printPoints(int x[], int y[], int size)
{
	int i;

	for (i=0; i<size; i++)
		printf("Point #%2d: (%d,%d)\n", i, x[i], y[i]);
}
