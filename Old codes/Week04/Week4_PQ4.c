#include <stdio.h>

int f2(int x, int y);

int main(void)
{
	int x = 5, y = 8;
	y = f2(y, x);
	printf("%d %d\n", x, y);
	return 0;
}

int f2(int x, int y) {
	int t;
	t = x;
	x = y; 
	y = t;
	return x; 
}

