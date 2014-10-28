/**
 * CS1010 AY2013/4 Semester 1 Lab2 Ex2
 * candles.c
 * This program reads in a positive integer and add up its
 * digits repeatedly until the sum is a single digit.
 * It would then print out the corresponding Fortune Cookie message.
 * Samuel Lim Yi Jie, A0111942
 * Tutorial Grp 24
 */

#include <stdio.h>

// Function prototype
void print_cookie(int);
int sum_digits(int);

int main(void)
{
	int input; //Variable to store number of residuals to make a new candle
	int id;

	printf("Enter a positive integer: ");

	scanf("%d", &input);

	id = sum_digits(input);
	print_cookie(id);

	return 0;
}

// This program reads in a positive integer and add up its
// digits repeatedly until the sum is a single digit.
// NOTE: Parament num must be a positive integer
int sum_digits(int num)
{
	int new_num = 0;

	while(num/10 > 0)
	{
		while(num>0)
		{
			new_num += num%10;
			num /= 10;
		}

		num = new_num;
		new_num=0;
	}

	return num;
}

//Prints fortune cookie message based on ID
void print_cookie(int id)
{
	if(id==1)
		printf("You will have a fine capacity for the enjoyment of life.");
	else if(id==2)
		printf("Now is the time to try something new.");
	else if(id==3)
		printf("Don't let doubt and suspicion bar your progress.");
	else if(id==4)
		printf("Your principles mean more to you than any money or success.");
	else if(id==5)
		printf("Accept the next proposition you hear.");
	else if(id==6)
		printf("A handful of patience is worth more than a bushel of brains.");
	else if(id==7)
		printf("You have an active mind and a keen imagination.");
	else if(id==8)
		printf("You are talented in many ways.");
	else
		printf("Treat everyone as a friend.");

	printf("\n");
}