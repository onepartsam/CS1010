#include <stdio.h>

int enumerate(int);

int main()
{
	int meal;
	printf("Enter total number of meals: ");
	scanf("%d", &meal);
	
	printf("Number of combinations = %d\n", enumerate(meal));

	return 0;
}

int enumerate(int x)
{
	if(x <= 0)
		return 1;
	else
		return enumerate(x-1) + enumerate(x-2);

}
