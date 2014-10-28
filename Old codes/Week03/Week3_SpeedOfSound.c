// Week3_SpeedOfSound.c

#include <stdio.h>
#include <math.h>

// function prototype
double spd_of_sound(double);

int main(void)
{
	double a, temperature;

 	printf("Temperature in degree Fahrenheit: ");
	scanf("%lf", &temperature);

	a = spd_of_sound(temperature);
	printf("Speed of sound in air of %.2f degree = %.2f ft/sec\n", temperature, a);

	return 0;
}

double spd_of_sound(double t)
{	
	return 1086 * (sqrt ( (5*t + 297) / 247 ));
}
