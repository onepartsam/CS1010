// bad_prog3.c
#include <stdio.h>

int main(void) {
	// declare the first input and second input
	double the_first_input, the_second_input;

	// ask user to enter two values
	printf("Enter two values: ");
	scanf("%lf %lf", &the_first_input, &the_second_input);

	if (the_first_input/the_second_input < 90.2) {
		if (the_first_input/the_second_input < 32.2)
			printf("Paper\n");
		else if (the_first_input/the_second_input >= 45.8)
			printf("Ruler\n");
		else
			printf("Pencil\n");
	}
	else {
		if (the_first_input/the_second_input >= 100.0)
			printf("Unknown\n");
		else if (the_first_input/the_second_input < 100.0)
			printf("Eraser\n");
		else
			printf("Clip\n");
	}

	return 0;
}

