// CS1010 AY2010.1 Semester 1
// PE Ex1: code.c
// Name: Samuel Lim Yi Jie
// Matriculation Number: A0111942N
// Discussion Group: W24
// Description: This program converts the days, hours and minutes into a 2 character game code.

#include <stdio.h>
#include <math.h>

//Functions prototype
int getTwoDigits(int);
int getTwoDigits2(int);
void printChar(int, int);

int main(void) 
{ 
	int day_input, hr_input, min_input, // user’s inputs 
		twoDigit;
	printf("Enter days, hours and minutes: ");
	scanf("%d %d %d", &day_input, &hr_input, &min_input);
	
	min_input += ( day_input * 24 * 60 ) + ( hr_input * 60 ); //Convert all to minutes
	
	twoDigit = getTwoDigits(min_input);
	printChar(twoDigit, 1);
	twoDigit = getTwoDigits2(twoDigit);
	printChar(twoDigit, 2);
	
	return 0;
} 

//This function get the 4th and 1st digit from the right and combined it to 2 digits
int getTwoDigits(int min)
{
	int r4, r1;
	
	r4 = (min/1000)%10;	//Get 4th number from right
	r1 = min%10;		//Get first number from right
	
	return r4*10 + r1;	//Combine two numbers
}

//This function get the first 2 decimal place
int getTwoDigits2(int min)
{
	int result = sqrt(min) * 1000;
	
	return (result/10)%100;	//Get two numbers
}

//This function prints the corresponding character of the result
void printChar(int result, int seq)
{
	if(result%2==0)
		printf("A");
	else if(result%3==0)
		printf("F");
	else if(result%5==0)
		printf("K");
	else if(result%7==0)
		printf("P");
	else if(result%11==0 || result%13==0)
		printf("T");
	else
		printf("Z");
	
	//This would create a line break
	if(seq == 2)
	{
		printf("\n");
	}
}