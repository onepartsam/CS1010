/**
 * CS1010 AY2013/4 Semester 1 Lab2 Ex1
 * collatz.c
 * This program reads a natural number and computes the number
 * of iterations required to turn the input number into 1 by
 * following the Collatz sequence: half it if the number is even,
 * or triple it and add 1 if the number is odd.
 * Samuel Lim Yi Jie, A0111942
 * Tutorial Grp 24
 */

#include <stdio.h>

//Function prototype
int count_iterations(int theNum);
int evenFunction(int theNum);
int oddFunction(int theNum);

int main(void) {
	
	int inputNum = 0;

	printf("Enter a natural number: ");
	scanf("%d", &inputNum);

	printf("Number of iterations = %d\n", count_iterations(inputNum) );

	return 0;
}

// Calculate the amount of iterations it takes for a natural number
// to reach one using the Collatz conjecture.
// Precondition: The parameter passed into this function must be a natural number
int count_iterations(int theNum)
{
	int theCount=0;

	while(theNum > 1)
	{
		if(theNum%2==0)
		{
			theNum = evenFunction(theNum);
		}
		else
		{
			theNum = oddFunction(theNum);
		}

		theCount++;
	}

	return theCount;
}

// Calculate parameter by using the formula: n/2
// Precondition: parameter must be an EVEN number more than 1
int evenFunction(int theNum)
{
	return theNum/2;
}

// Calculate parameter by using the formula: 3n+1
// Precondition: parameter must be an ODD number more than 1
int oddFunction(int theNum)
{
	return theNum*3+1;
}
