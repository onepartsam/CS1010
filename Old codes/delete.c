#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int delete(char str[], int size, char c);

int main()
{
	char str[] = "I love pancakes1";
	int len = strlen(str);
	char c = 'f';

	len = delete(str,len,c);
	printf("%s\n", str);

	c='L';

	len = delete(str,strlen(str),c);
	printf("%s\n",str);

	c='1';

	len = delete(str,strlen(str),c);
	printf("%s\n",str);

	return 0;
}

int delete(char str[], int size, char c)
{
	int i, j;

	for(i=0; i<size; i++)
	{
		if( toupper(str[i]) == toupper(c) )
		{
			for(j=i; j<size; j++)
			{
				str[j] = str[j+1];
			}
		}
	}
	
	return strlen(str);
}
