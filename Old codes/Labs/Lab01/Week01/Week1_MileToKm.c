//converts distance in miles to kilometers
#include <stdio.h>

int main(void) {
	float miles,	//input - dist in mile
		kms;		//output - dist in km
	
	printf("Enter distance in miles > ");
	scanf("%f", &miles);

	kms = 1.609 * miles;
	printf("That's %9.2f kilometers.\n", kms);

	return 0;
}
