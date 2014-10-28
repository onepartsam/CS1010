/**
 * CS1010 AY2013/4 Semester 1 Lab3 Ex2
 * bisection.c
 * Name: Samuel Lim Yi Jie
 * Discussion Grp: T24
 * Program: This program asks the user to enter the number of darts to throw and randomly determining the amount
 * of darts landed within the area of the equation x*x + y*y = 1 whereby the area if PI. With more darts thrown,
 * the value of PI also becomes more accurate. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function Prototype
int throwDarts(int);
double randRange(double, double);
double computePI(double, double);

int main(void)
{
    int darts_total,   // number of darts to be thrown
	    darts_inside;  // number of darts inside quadrant
	double pi;			// estimation of PI

	printf("How many darts? ");
	scanf("%d", &darts_total);
	
	darts_inside = throwDarts(darts_total);
	pi = computePI(darts_inside, darts_total);
	
	printf("Darts landed inside unit circle's quadrant = %d\n"
		"Approximated pi = %.4f\n", darts_inside, pi);

    return 0;
}

int throwDarts(int darts)
{
	int i, count = 0;
	double x, y;
	
	for(i=0; i<darts; i++)
	{
		x = randRange(0.0, 1.0);
		y = randRange(0.0, 1.0);
		
		if( pow(x, 2) + pow(y, 2) <= 1)
		{
			count++;
		}
	}
	
	return count;
}

//This function returns a random value with the range of `from` to `to
double randRange(double from, double to)
{
	return ( (double) rand() / RAND_MAX ) * (to-from) + from;
}

//This function computes PI based on the number of the darts within the area and the total darts thrown
double computePI(double inside, double outside)
{
	return 4 * (inside/outside);
}