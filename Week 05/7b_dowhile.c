#include <stdio.h>

int main(void)
{
	int n;
	
	do
	{
		printf("Enter n: ");
		scanf("%d", &n);
	}
	while( n<0 );
	
	printf("n = %d\n", n);
	
	return 0;
}