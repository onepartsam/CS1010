// bad_prog4.c
// This program computes the GCD of two non-negative integers, not both zeroes.
#include <stdio.h>

void GCD(int, int); // prototype for GCD function

int main(void) {
	int num1, num2;

	printf("Enter two non-negative integers, not both zeroes: ");
	scanf("%d %d", &num1, &num2);
	GCD(num1, num2);

	return 0;
}

// This function computes the GCD of a and b
// Pre-cond: a and b are both >= 0, and not both = 0
void GCD(int a, int b) {
	int r;  // r is the remainder of a/b

	while (b > 0) {
		r = a%b;
		a = b;
		b = r;
	}
	printf("The GCD is %d\n", a);
}

