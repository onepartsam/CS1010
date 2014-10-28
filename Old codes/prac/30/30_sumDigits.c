// sumDigits.c
#include <stdio.h>
#include <ctype.h>

int main(void) {
	int sum=0;
	char c;

	printf("Enter input: ");
	
	while(!isspace(c=getchar()))
	{
		if(isdigit(c))
		{
			sum += c - '0';
		}
	}

	printf("Sum = %d\n", sum);

	return 0;
}

