#include <stdio.h>
#include <math.h>

int main (void)
{
	float hour, min, time, temp;
	printf("Enter hours and minutes since power failure: ");
	scanf("%f %f", &hour, &min);

	min = min / 60;
	time=hour+min;

	//printf( "Time input: %f hours", time);

	temp = ( ( 4 * pow(time,10) ) / ( pow(time,9) + 2 ) ) - 20;

	printf( "Temperature in freezer = %.2f\n", temp );

	return 0;
}
