// Week11_gcd.c
// Compute the greatest common divisor (GCD) of two
// non-negative integers, not both zero.
// recursive version
//

#include <stdio.h>

int gcd(int, int);

int main(void) 
{
	int num1, num2;

	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);

	printf("gcd(%d, %d) = %d\n", num1, num2, gcd(num1, num2));
	return 0;
}

// Compute the greatest common divisor of a and b
// Pre-cond: a and b non-negative, not both zero
int gcd(int a, int b)
{
	// hint: you have been given recursive math formula
	// just turn it into a recursive function exactly.

	// write your code below

	if(b==0)
		return a;
	else
		return gcd(b, a%b);



}

