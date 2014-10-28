// Week4_LeapYear.c
// To check if a year is a leap year or not.

#include <stdio.h>

int main(void)
{
	int year=0;

	printf("Enter year: ");
	// fill in your code, modify as necessary
	scanf("%d", &year);

	if( ((year%4==0) && !(year%100==0)) || (year%400==0) )
	{
		printf("%d is a leap year.\n", year);
	} else {
		printf("%d is not a leap year.\n", year);
	}

	return 0;
}
