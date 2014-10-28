// Week6_PointerEx2.c
// CS1010 AY2010/11 Semester 1 MidTerm Test Q6

#include <stdio.h>

int main(void)
{
	int a = 7;
	double b = 5.99;
	int *p;
	double *q;

	p = &a;
	q = &b;
	*p = *q;
	*q += *p;

	printf ("%d, %f\n", a, b);

	return 0;
}
