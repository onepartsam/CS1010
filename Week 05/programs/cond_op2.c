// cond_op2.c
#include <stdio.h>

int main(void) {
	int a, b, max;

	printf("Enter 2 integers: ");
	scanf("%d %d", &a, &b);

	if (a > b)
		max = a;
	else
		max = b;

	printf("max = %d\n", max);

	return 0;
}

