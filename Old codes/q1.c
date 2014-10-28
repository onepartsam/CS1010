// q1.c
#include <stdio.h>
#define MAX_ROW 2
#define MAX_COL 3

void printArray(char [][MAX_COL], int, int);

int main(void) {
	char values[MAX_ROW][MAX_COL];
	int row, col;

	printf("Enter values: \n");
	for (row=0; row<MAX_ROW; row++)
	{
		for (col=0; col<MAX_COL; col++)
		{
			do
			{
				scanf("%c", &values[row][col]);
			}
			while(values[row][col] == '\n' || values[row][col]==' ');
		}
	}

	printf("Array entered contains:\n");
	printArray(values, MAX_ROW, MAX_COL);

	return 0;
}

// To print element in array arr
void printArray(char arr[][MAX_COL], int row_size, int col_size) {
	int row, col;

	for (row=0; row<row_size; row++) {
		for (col=0; col<col_size; col++)
			printf("%c ", arr[row][col]);
		printf("\n");
	}
}

