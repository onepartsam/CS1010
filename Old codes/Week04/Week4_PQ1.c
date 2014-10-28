#include <stdio.h>
int f();  // prototype

int main(void) {
	printf("Value returned = %d\n", f());
	return 0;
}

int f() {
	printf("A\n");
	return 1;
	printf("B\n");
	return 2;
	printf("C\n");
	return 3;
}

