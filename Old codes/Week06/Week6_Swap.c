// Week6_Swap.c
// this version is incorrect, can't swap a and b

#include <stdio.h>

void swap(int *, int *);

int main(void) 
{
	int a = 9, b = -2;

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
