/**
 * CS1010 AY2013/4 Semester 1 Lab3 Ex1
 * hourglass.c
 * Name: Samuel Lim Yi Jie
 * Discussion Group: T24
 * Program: Read in 3 positive integers: a and b which are the durations of two
 * hourglasses, and c which is the duration you want to measure. All values
 * are in minutes. The program then determines if you can measure c exactly
 * using the hourglasses, and if so, the number of times you need to flip the
 * two hourglasses such that the total number of flips is the minimum.
 */

#include <stdio.h>

int compute_flips(int, int, int, int *, int *);

int main () {
	int hg1, hg2;        // durations of hourglasses; assume hg1 < hg2
	int time;            // duration to measure; assume hg2 < time
	int flips1, flips2;  // number of flips needed for hourglasses

	printf("Enter 3 inputs: ");
	scanf("%d %d %d", &hg1, &hg2, &time);
	
	compute_flips(hg1, hg2, time, &flips1, &flips2);
	
	if(flips1==0 && flips2==0)
		printf("Impossible!\n");
	else
		printf("Possible!\n%d flip(s) for %d-minute hourglass and "
			"%d flip(s) for %d-minute hourglass.\n", flips1, hg1, flips2, hg2);
	
	return 0;
}

// This function calculate the least amount of the number of times you need to
// flip the two hourglasses
int compute_flips(int hg1, int hg2, int time, int *f1, int *f2)
{
	*f1 = *f2 = 0;
	int i = 0;
	int temp = 0;
	int total = 0;
	
	for(i=time/hg1; i>=0; i--)
	{
		temp = time - (hg1*i);
		if ( temp%hg2 == 0 )
		{
			if( temp/hg2 + i <= total || total == 0 )
			{
				*f1 = i;
				*f2 = temp/hg2;
				total = *f1 + *f2;
			}
		}
	}
	
	return 0;
}