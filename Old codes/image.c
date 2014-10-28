// CG1101 AY2012/3 Semester 1 PE2
//
// image.c
//
// This program reads in a binary image,
// transpose it, shift it, flip it, rotate it,
// or look for a pattern inside it.
//
// Name: 
// plab account-id: 
// Lab group:

#include <stdio.h>
#define N 5 

// function prototypes
// 5 functions to be written by you
void transpose(int image[][N]);
void shift(int image[][N]);
void flip(int image[][N]);
void rotate(int image[][N]);
int match(int image[][N], int pattern[][N], int);
// 3 functions that are complete and given
void read_image(int image[][N]);
int read_pattern(int pattern[][N]);
void print_image(int image[][N]);

// main function is complete, not to be changed!
int main(void)
{
	int choice,	// user choice of image processing
		size,   // size of pattern image
		count,  // number of matches of pattern in binary
		image[N][N], pattern[N][N];

	read_image(image);
	printf("Enter choice:\n\t(1) transpose\n"
			"\t(2) shift\n\t(3) flip\n"
			"\t(4) rotate\n\t(5) match\n");
	scanf("%d", &choice);

	switch (choice)
	{
		case 1:
			transpose(image);
			printf("Image after transposition:\n");
			print_image(image);
			break;
		case 2:
			shift(image);
			printf("Image after shift:\n");
			print_image(image);
			break;
		case 3:
			flip(image);
			printf("Image after flip:\n");
			print_image(image);
			break;
		case 4:
			rotate(image);
			printf("Image after rotation:\n");
			print_image(image);
			break;
		case 5:
			size = read_pattern(pattern);
			count = match(image, pattern, size);
			printf("Pattern image matches %d times.\n", count);
			break;
	}

	return 0;
}

// <replace this line with your function description>
void transpose(int image[][N])
{
	// fill in your code below (remove this comment)
	int r, c;

	for(r=0; r<N; r++)
	{
		for(c=0; c<N; c++)
		{
			image[r][c] = 1 - image[r][c];
		}
	}
}

// <replace this line with your function description>
void shift(int image[][N])
{
	// fill in your code below (remove this comment)
	
	int r, c, temp;

	for(r=0; r<N; r++)
	{
		temp = image[r][0];

		for(c=0; c<N; c++)
		{
			image[r][c]=image[r][c+1];
		}

		image[r][N-1]=temp;
	}

}

// <replace this line with your function description>
void flip(int image[][N])
{
	// fill in your code below (remove this comment)
	int r, c, temp;

	for(c=0; c<N; c++)
	{
		for(r=0; r<N/2; r++)
		{
			temp = image[r][c];
			image[r][c] = image[N-1-r][c];
			image[N-1-r][c] = temp;
		}
	}

}

// <replace this line with your function description>
void rotate(int image[][N])
{
	// fill in your code below (remove this comment)
	int r, c,
		new[N][N] = {{0}};

	for(r=0; r<N; r++)
	{
		for(c=0; c<N; c++)
		{
			new[c][N-1-r] = image[r][c];
		}
	}

	for(r=0; r<N; r++)
	{
		for(c=0; c<N; c++)
		{
			image[r][c] = new[r][c];
		}
	}
}

// <replace this line with your function description>
int match(int image[][N], int pattern[][N], int size)
{
	// fill in your code below (remove this comment)
	int r, c, i, j, total, count;
	
	total = 0;

	for(r=0; r<N; r++)
	{
		for(c=0; c<N; c++)
		{
			count = 0;

			for(i=0; i<size; i++)
			{
				for(j=0; j<size; j++)
				{
					if( image[r+i][c+j] == pattern[i][j] )
					{
						count++;
					}
					else
					{
						break;
					}
				}
			}

			if(count==size*size)
			{
				total++;
			}
		}
	}
	
	return total; // stub, to be replaced by your code
}


/////////////////////////////////////////////////////
// The following functions are complete and given. //
// Not to be changed!                              //
/////////////////////////////////////////////////////

// read in 5*5 binary image
void read_image(int image[][N])
{
	int row, col;
	printf("Enter %d*%d image:\n", N, N);
	for (row=0; row<N; row++)
		for (col=0; col<N; col++)
			scanf("%d", &image[row][col]);
}

// read in a pattern image
int read_pattern(int pattern[][N])
{
	int row, col, size;

	printf("Enter size of pattern: ");
	scanf("%d", &size);
	printf("Enter %d*%d pattern:\n", size, size);
	for (row=0; row<size; row++)
		for (col=0; col<size; col++)
			scanf("%d", &pattern[row][col]);

	return size;
}

// print out 5*5 binary image
void print_image(int image[][N])
{
	int row, col;
	for (row=0; row<N; row++)
	{
		for (col=0; col<N; col++)
			printf("%d ", image[row][col]);
		putchar('\n');
	}
}
