/**
 * CS1010 AY2013/4 Semester 1 Lab3 Ex2
 * bisection.c
 * Name: Samuel Lim Yi Jie
 * Discussion Grp: T24
 * Program: Computes the root of a continuous function based on the input of
 * coefficients of polynomial and endpoints.
 */

#include <stdio.h>
#include <math.h>
#define THRESHOLD 0.0001

// Given function prototype must not be changed
double polynomial(double, int, int, int, int);

int main(void) {
	int    c3, c2, c1, c0; // coefficients of polynomial
	double a, b,           // endpoints
	       pA, pB;         // function values at endpoints
	double m, pM;          // midpoint and function value at midpoint

	printf("Enter coefficients (c3,c2,c1,c0) of polynomial: ");
	scanf("%d %d %d %d", &c3, &c2, &c1, &c0);

	printf("Enter endpoints a and b: ");
	scanf("%lf %lf", &a, &b);
	
	int i = 1;
	double diff;
	
	do
	{
		m = (a+b)/2;
		
		//Test output --- printf("#%d: a = %f; b = %f; m = %f\n", i, a, b, m);
		diff = fabs(fabs(a)-fabs(b));
		
		pA = polynomial(a, c3, c2, c1, c0);
		pB = polynomial(b, c3, c2, c1, c0);
		pM = polynomial(m, c3, c2, c1, c0);
		
		//Test output --- printf("     p(a) = %f; p(b) = %f; p(m) = %f\n", pA, pB, pM);
		
		if( (pM>0 && pA>0) || (pM<0 && pA<0) ) // Possible scenarios whereby a would be replaced by m
		{
			a = m;
		}
		else
		{
			b = m;
		}
		
		if(pM == 0)
			break;
		
		i++;
	}
	while( diff >= THRESHOLD ); // This loop would continue as long as the difference between a and b is more than the threshold
		
	printf("root = %f\n", m);
	printf("p(root) = %f\n", pM);

	return 0;
}

// This function compute the polynomial function value
double polynomial(double x, int c3, int c2, int c1, int c0)
{
	return c3*pow(x,3) + c2*pow(x,2) + c1*x + c0;
}
