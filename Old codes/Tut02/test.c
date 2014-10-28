#include <stdio.h>

int main (void)
{
	int a,b,c;
	a=b=c=0;

	a = 1+(c = 5);

	printf("Value: %d\n", a);
	
	return 0;
}
