/**
 * CS1010 AY2013/4 Semester 1 Lab4 Ex1
 * estimatePi.c
 * This program reads in a list of n distinct integers and
 * computes the estimate value for pi.
 * This program uses an external GCD function (provided in gcd.o).
 * Author: Samuel Lim Yi Jie, A0111942N
 * T24
 */

#include <stdio.h>
#include <math.h>
#include "gcd.h"
#define MAX_SIZE 50

double pi(int [], int);

int main(void)
{
	int size, i,
		numbers[MAX_SIZE] = {0};
		
	scanf("%d", &size);
	
	for(i=0; i<size; i++)
		scanf("%d", &numbers[i]);
	
	printf("Estimated pi = %.4f\n", pi(numbers, size));
	
	return 0;
}

/**
 * This function takes in an integer array "arr" that contains
 * the values, and the number of values, size, in that array.
 * The function would compute and return the estimated value of p.
 */
double pi(int arr[], int size)
{
	int i, j, total = 0, counts = 0;
	
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if( gcd(arr[i], arr[j]) == 1)
				counts++;
			
			total++;
		}
	}
		
	return sqrt( total / (counts/6.0) );
}

