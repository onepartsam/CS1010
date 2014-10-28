// CS1101C AY08/09 Sem1 Exam Q5
#include <stdio.h>

void f1(int x, int y);

int main(void)
{
	int x = 5, y = 8;
	f1(y, x);
	printf("%d %d\n", x, y);

	return 0; 
}

void f1(int x, int y){
	int t;
	t = x;
	x = y; 
	y = t;
}

