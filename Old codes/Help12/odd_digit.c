#include <stdio.h>

int odd_digits(int);

int main()
{
	printf("%d", odd_digits(989));
	return 0;

}

int odd_digits(int num)
{
	if(num/10==0)
		return num%2;
	else
		return (num%2%10) && odd_digits(num/10);
}
