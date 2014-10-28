// bad_prog2.c
// This program checks whether 3 input values are in non-decreasing order.
#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("Enter 3 integers: ");
	scanf("%d %d %d", &a, &b, &c);
	if (a <= b) {
		if (b <= c)
			printf("The values are in non-decreasing order.\n");
		else
			printf("The values are not in non-decreasing order.\n");
	}
	else if (a > b) {
		if (b <= c)
			printf("The values are not in non-decreasing order.\n");
		else
			printf("The values are not in non-decreasing order.\n");
	}
	else
		printf("The values are not in non-decreasing order.\n");

	return 0;
}

