#include <stdio.h>
#include <ctype.h>

int main()
{
	char c;
	int total=0;

	while( !isspace(c = getchar()) )
	{
		if(isdigit(c))
			total += c - '0';
	}

	printf("%d", total);

	return 0;
}
