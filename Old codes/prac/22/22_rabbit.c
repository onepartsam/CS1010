/**
 * rabbit.c 
 * A rabbit can jump at most 50 centimetres. It needs to cross a
 * river, with rocks positioned in a straight line in the river.
 * The program computes the minimum number of jumps for the rabbit
 * to cross to the other side of the river.
 */

#include <stdio.h>
#define MAX_ROCKS 20

int countJumps(int [], int);

int main(void) {
	int num_rocks,            // including opposite bank
		i, rocks[MAX_ROCKS]={0};

	printf("Enter number of rocks: ");
	scanf("%d", &num_rocks);
	
	//Get rocks
	for(i=1; i<=num_rocks; i++)
	{
		scanf("%d", &rocks[i]);
	}
	
	printf("%d\n", countJumps(rocks, num_rocks));

	return 0;
}

// Counts the minimum number of jumps the rabbit needs
// to take to get to the other side of the river.
// Precond: size > 0
int countJumps(int rocks[], int size)
{
	int i, j, hasJump, jumps = 0;
	
	for(j=0; j<size;)
	{
		hasJump = 0;

		for(i=size; i>j; i--)
		{
			if(rocks[i]-rocks[j] <= 50)
			{
				jumps++;
				j = i;
				hasJump = 1;
				break;
			}
		}

		if(!hasJump)
			return -1;
	}

	return jumps; // this is just a stub; replace it with the correct value
}

