// Week9_Fill.c
// Repeatitively print input string until no more copy
// can be printed out by a limit of 40 characters output.

#include <stdio.h>
#include <string.h>

#define LINE 40

int main(void)
{
	char str[10+1];
	int i, len, copy;

	printf("Enter a string (between 1 and 10 characters): ");

	fgets(str, 11, stdin);
	len = strlen(str);
	if (str[len-1] == '\n')
		str[len-1] = '\0';
	
	len = strlen(str);
	copy = LINE / len;

	for(i=0; i<copy; i++)
		printf("%s", str);

	return 0;
}

