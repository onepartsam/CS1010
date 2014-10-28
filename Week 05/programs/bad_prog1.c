// bad_prog1.c
// This program checks whether a user-input value 
// is between 0 and 1, non-inclusive.
#include <stdio.h>

int main(void) {
	float value;

	printf("Enter value: ");
	scanf("%f", &value);

	if (0 < value < 1)
		printf("%f is between 0 and 1\n", value);
	else
		printf("%f is not between 0 and 1\n", value);

	return 0;
}

