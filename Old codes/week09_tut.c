#include <stdio.h>
#define MAX_ROW 15
#define MAX_COL 5
void printLoop(int [][MAX_COL]);
void scanLoop(int [][MAX_COL]);
int main()
{
	//int arr[5][5] = { {1,2,3,4,5},
	//				  {6,7,8,9,10} };
	
	int arr[MAX_ROW][MAX_COL] = {{0}};

	scanLoop(arr);
	printLoop(arr);
	//printf("helloWorld");


	return 0;
}

void scanLoop(int arr[][MAX_COL])
{
	int i, j;

	for(i=0; i<MAX_ROW; i++)
	{
		for(j=0; j<MAX_COL; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

void printLoop(int arr[][MAX_COL])
{
	int i, j;

	for(i=0; i<MAX_ROW; i++)
	{
		for(j=0; j<MAX_COL; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
