/**
 * Supplementary Practice 
 *
 * fraction.c
 *
 * This program reads in two fractions, check whether
 * they equal and compute their sum.
 *
 * <name> 
 */

#include <stdio.h>

typedef struct
{
	int numerator, denominator;
} fraction_t;

// function prototypes
int euclid_gcd(int, int);
fraction_t simplify(fraction_t);
fraction_t add(fraction_t, fraction_t);
int equals(fraction_t, fraction_t);
void print(fraction_t);  // for debugging

int main(void)
{
	fraction_t frac1, frac2, sum;

	printf("Enter 1st fraction: ");
	scanf("%d %d", &frac1.numerator, &frac1.denominator);
	printf("Enter 2nd fraction: ");
	scanf("%d %d", &frac2.numerator, &frac2.denominator);

	if ( equals(frac1, frac2) )
		printf("The fractions are the same.\n");
	else
		printf("The fractions are not the same.\n");

	sum = add(frac1, frac2);
	printf("Sum is %d/%d\n", sum.numerator, sum.denominator);

	return 0;
}

// Return gcd of a and b
int euclid_gcd(int a, int b)
{
	int remainder;
	while (b != 0)
	{
		remainder = a%b;
		a = b;
		b = remainder;
	}
	return a;
}

// Simplify a given fraction
fraction_t simplify(fraction_t frac)
{
	// fill in your code below

}

// Add two fractions
fraction_t add(fraction_t frac1, fraction_t frac2)
{
	// fill in your code below

}

// Check whether two fractions equals
// Return 1 if so, 0 otherwise
int equals(fraction_t frac1, fraction_t frac2)
{
	// fill in your code below

}

void print(fraction_t frac)
{
	printf("%d/%d\n", frac.numerator, frac.denominator);
}
