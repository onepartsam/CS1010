// cond_op3.c
#include <stdio.h>

int main(void) {
	int n;

	printf("Enter a non-negative integer: ");
	scanf("%d", &n);

	if (n < 2)
		printf("There is %d person.\n", n);
	else
		printf("There are %d persons.\n", n);

	return 0;
}

