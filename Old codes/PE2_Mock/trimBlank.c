// AY2013/4 Semester 1
//
// Mock PE2 Ex1: trimBlank.c
//
// Name: 
// Matriculation number: 
// Description:

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int clean(char []);

int main(void)
{
	int len, removed;
	char str[MAX+1];

	fgets(str, MAX+1, stdin);
	len = strlen(str);
	if (str[len-1] == '\n')
		str[len-1] = '\0';

	removed = clean(str);

	puts(str);
	printf("%d consecutive blanks removed\n", removed);

	return 0;
}

// Remove consecutive blanks in the given string
// Return the number of blanks been trimmed.
int clean(char str[])
{
	int i, j,
		rmSpace = 0, prevSpace = 0;

	for(i=0; i<strlen(str); i++)
	{
		if( isspace(str[i]) )
		{
			if(i-1==prevSpace)
			{
				for(j=i; j<strlen(str); j++)
				{
					str[j] = str[j+1];
				}
				rmSpace++;
				i--;
			}
			else
			{
				prevSpace=i;
			}
		}
	}

	return rmSpace;  // stub, to be replaced by your code
}
