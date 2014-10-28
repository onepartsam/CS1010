#include <stdio.h>

int g(int);

int main(void)
{
	printf("Answer = %d\n", g(3 + g(7)));
	return 0;
}

int g(int n) {
	return n * 10;
}

