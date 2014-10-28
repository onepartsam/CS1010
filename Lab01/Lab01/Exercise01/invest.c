/**
 * CS1010 AY2013/4 Semester 1 Lab1 Ex1
 * invest.c
 * This program calculates the final amount given principal amount,
 * interest rate, and number of years, based on compound interest.
 * Samuel Lim Yi Jie, A0111942N
 * <Type your discussion group here>
 */
 
//include libraries
#include<stdio.h>
#include<math.h>

//main function
int main(void)
{
	//Constructor
	int principal, rate, years;
	float investment;
	
	principal = rate = years = investment = 0; //Initiate variables

	printf("Enter principal amount: ");
	scanf("%d", &principal);
	printf("Enter interest rate   : ");
	scanf("%d", &rate);
	printf("Enter number of years : ");
	scanf("%d", &years);

	//printf("Results: %f - %f - %d\n", principal, rate, years);
	investment = ( principal * ( 1 - pow( (rate/100.00), (years + 1) ))) / (1 - rate/100.00);
	
	printf("Amount = $%.2f\n", investment);

	return 0;
}
