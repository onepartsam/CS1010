// CS1010 AY2010.1 Semester 1
// PE Ex1: analyser.c
// Name: Samuel Lim Yi Jie
// Matriculation Number: A0111942N
// Discussion Group: W24
// Description: 

#include <stdio.h>

//Functions prototype
void calMaxMin(int *, int *);

int main(void) 
{ 
	int mark = 0, choice;
	int max, min;
	max = min = NULL;
	
	while(mark>=0)
	{
		printf("Enter mark (negative number to end): ");
		scanf("%d", &mark);
		calMax(mark, &max);
		calMini(mark, &min);
	}
	
	printf("Max %d Min %d\n", max, min);
	
	return 0;
}

void calMax(int mark, int *maxi)
{
	if(n > *maxi)
	{
		*maxi = n;
	}
}

void calMin(int mark, int *mini)
{
	if(n < *mini)
	{
		*mini = n;
	}
}