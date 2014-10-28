// validPath.c
#include <stdio.h>
#include <string.h>

#define SIZE 6     // size (number of rows and columns) of maze
#define WALL 0
#define CELL 1
#define MAX_PATHLEN 10

void readMaze(int [][SIZE], int);
int isValid(int [][SIZE], char []);

int main(void) {
	int maze[SIZE][SIZE];
	char path[MAX_PATHLEN+1];

	readMaze(maze, SIZE); 

	printf("Enter path: ");
	scanf("%s", path);

	if (isValid(maze, path))
		printf("Path is valid.\n");
	else
		printf("Path is not valid.\n");

	return 0;
}

// Create the maze
void readMaze(int maze[][SIZE], int size) {
	int	r, c;

	printf("Enter maze:\n");
	for (r=0; r<size; r++)
		for (c=0; c<size; c++)
			scanf("%d", &maze[r][c]);
}

// Determine whether input path is valid in input maze
int isValid(int maze[][SIZE], char path[]) {
	int pathlen, x, y, tempx, tempy, i;
	x=y=tempx=tempy=0;

	pathlen = strlen(path);

	for(i=0; i<pathlen; i++)
	{
		if(path[i] == 'N' && x!=0)
			tempx--;
		else if(path[i] == 'S' && x!=pathlen-1)
			tempx++;
		else if(path[i] == 'W' && y!=0)
			tempy--;
		else if(path[i] == 'E' && y!=pathlen-1)
			tempy++;

		if(maze[tempx][tempy] == 1)
		{
			x = tempx;
			y = tempy;
		}
		else
		{
			return 0;
		}
	}

	printf("%d - %d\n", x, y);

	return 1;
}

