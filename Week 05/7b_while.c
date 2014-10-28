#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter n: ");
	
	scanf("%d", &n);
	
	while(n < 0)
	{
		printf("Enter n: ");
		scanf("%d", &n);
	}
	
	printf("n = %d\n", n);
	
	return 0;
}