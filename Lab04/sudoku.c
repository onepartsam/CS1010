/**
 * CS1010 AY2013/4 Semester 1 Lab4 Ex2
 * sudoku.c
 * This program reads an incomplete 4x4 Sudoku board
 * (with 0 representing blank cells) and attempts to solve the puzzle.
 * Author: Samuel Lim Yi Jie
 * Discussion Group: T24
 */

#include <stdio.h>
#define SIZE 4
#define MAX_TOTAL 10

void readBoard(int [][SIZE]);
void printBoard(int [][SIZE]); // given to students
void solve(int [][SIZE]); // given to students
int anotherRound(int [][SIZE]);
void rowSolver(int [][SIZE]);
void colSolver(int [][SIZE]);
void twoSqSolver(int [][SIZE]);

int main(void) {
	int board[SIZE][SIZE];

	printf("Enter board (0 for blank cell):\n");
	readBoard(board);

	solve(board); // solve the puzzle now!

	printf("Sudoku puzzle solved:\n");
	printBoard(board);

	return 0;
}

// To read a 4x4 integer array from user.
// Complete the code below.
void readBoard(int board[][SIZE])
{
	int i, j;

	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			scanf("%d", &board[i][j]);
		}
	}
}

// To print the 4x4 Sudoku board.
// (This function is given to students.)
void printBoard(int board[][SIZE]) {
	int r, c;

	for (r = 0; r < SIZE; r++) {
		for (c = 0; c < SIZE; c++)
			printf("%d ", board[r][c]);
		printf("\n");
	}
}

// Solving a Sudoku puzzle using a very simple
// algorithm (algorithm A in the write-up).
// It only solves the simplest puzzles.
// (This function is given to students.)
void solve(int board[][SIZE]) {
	int blankCellFound; // indicate whether there is still some blank cell

	do {
		blankCellFound = anotherRound(board);
	} while (blankCellFound);
}

// Apply loop body of algorithm A and return 1 if there are still
// blank cells, or 0 if there is no more blank cell.
int anotherRound(int board[][SIZE])
{
	int i, j;

	rowSolver(board);
	colSolver(board);
	twoSqSolver(board);

	//Check if all is solved
	for(i=0; i<SIZE; i++)
	{
		for(j=0; j<SIZE; j++)
		{
			if(board[i][j] == 0)
				return 1;
		}
	}

	return 0; // this is a stub
}

// This function checks for each row, check whether there is a single 0.
// If so, replace that 0 with the obvious value.
void rowSolver(int board[][SIZE])
{
	int i, j, amtZero, amtLeft, temp_j;

	//Check row if there's a single 0
	for(i=0; i<SIZE; i++)
	{
		amtZero = 0;
		amtLeft = MAX_TOTAL;

		for(j=0; j<SIZE; j++)
		{
			if(board[i][j] == 0)
			{
				temp_j = j;
				amtZero++;
			}
			else
				amtLeft -= board[i][j];
		}

		if(amtZero == 1)
		{
			board[i][temp_j] = amtLeft;
		}
	}
}

// This function checks for each column, check whether there is a single 0.
// If so, replace that 0 with the obvious value.
void colSolver(int board[][SIZE])
{
	int i, j, amtZero, amtLeft, temp_j;

	for(i=0; i<SIZE; i++)
	{
		amtZero = 0;
		amtLeft = MAX_TOTAL;

		for(j=0; j<SIZE; j++)
		{
			if(board[j][i] == 0)
			{
				temp_j = j;
				amtZero++;
			}
			else
				amtLeft -= board[j][i];
		}

		if(amtZero == 1)
		{
			board[temp_j][i] = amtLeft;
		}
	}
}

// This function checks for each 2×2 section, check whether there is a single 0.
// If so, replace that 0 with the obvious value.
void twoSqSolver(int board[][SIZE])
{
	int i, j, k, l, amtZero, amtLeft, temp_i, temp_j;

	for(l=0; l<SIZE; l+=2)
	{
		for(k=0; k<SIZE; k+=2)
		{
			amtZero = 0;
			amtLeft = MAX_TOTAL;

			for(i=0+l; i<2+l; i++)
			{
				for(j=0+k; j<2+k; j++)
				{
					if(board[i][j] == 0)
					{
						temp_i = i;
						temp_j = j;
						amtZero++;
					}
					else
						amtLeft -= board[i][j];
				}
			}
			if(amtZero == 1)
			{
				board[temp_i][temp_j] = amtLeft;
			}
		}
	}
}