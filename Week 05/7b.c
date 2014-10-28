#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter n: ");
	for (scanf("%d", &n); n < 0; scanf("%d", &n))
		printf("Enter n: ");
	printf("n = %d\n", n);
	
	return 0;
}