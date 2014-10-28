/**
 * CS1010 AY2013/4 Semester 1 Lab5 Ex2
 * convert_base.c
 * This program reads in a positive integer and a target base (between 2 and 36 inclusive),
 * and generate the equivalent value in the target base.
 * Samuel Lim Yi Jie
 * T24
 */

#include <stdio.h>
#define LEN 31

char digit(int);
int convertBase(int [], int, int, int);

int main(void) {
	int value, base, size, i,
		arr[LEN]={0};

	printf("Enter a positive decimal integer: ");
	scanf("%d", &value);

	printf("Enter target base (2-36): ");
	scanf("%d", &base);
	
	size = convertBase(arr, value, base, 0);
	
	printf("%d converted to base %d = ", value, base);

	for(i=size-1; i>=0; i--)
	{
		printf("%c", digit(arr[i]) );
	}
	
	printf("\n");

	return 0;
}

// to generate equivalent value in the target base
int convertBase(int arr[], int value, int base, int i)
{	
	arr[i]=value%base;

	if(value/base==0)
	{	
		return ++i;
	}
	else
	{
		return convertBase(arr, value/base, base, ++i);
	}
}

// to convert a 'digit' into its corresponding letter 
char digit(int dig) {
	if (dig > 9)
		return (char) ((int) 'A' + dig - 10);
	else
		return (char) ((int) '0' + dig);
}

