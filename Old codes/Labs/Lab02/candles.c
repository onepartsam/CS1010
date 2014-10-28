/**
 * CS1010 AY2013/4 Semester 1 Lab2 Ex2
 * candles.c
 * This program attempts find out how many candles can burn in total,
 * given two positive integers n and k.
 * Samuel Lim Yi Jie, A0111942
 * Tutorial Grp 24
 */

#include <stdio.h>

// Function prototype
int count_candles(int, int);

int main(void)
{
	int numCan, //Variable to store number of candles
		numResid; //Variable to store number of residuals to make a new candle

	printf("Enter number of candles and \n");
	printf("number of residuals to make a new candle: ");

	scanf("%d %d", &numCan, &numResid);

	printf("Total candles burnt = %d\n", count_candles(numCan, numResid) );

	return 0;
}

//Calculates how many candles can burn in total
//NOTE: Parameters num_can & num_resid must be a positive integer
int count_candles(int num_can, int num_resid)
{
	int total_can;
	total_can = 0;

	while(num_can > 0)
	{
		if(num_can > num_resid)
			total_can += num_resid;
		else
			total_can += num_can;
		num_can -= num_resid;
		num_can++;
	}

	return total_can;
}