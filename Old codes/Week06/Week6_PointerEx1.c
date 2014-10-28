// Week6_PointerEx1.c

#include <stdio.h>

int main(void)
{
	int a = 2, *f1, *f2;

	f1 = f2 = &a;
	(*f2)++;
	*f1 += 2;

	printf("%d %d %d\n", a, *f1, *f2);

	return 0;
}
