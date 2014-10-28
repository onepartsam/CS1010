#include<stdio.h>
#include<math.h>

int main(void)
{
	int principal, rate, years;
	float investment;
	
	principal = rate = years = investment = 0; //Initiate variables

	printf("Enter principal amount: ");
	scanf("%d", &principal);
	printf("Enter interest rate   : ");
	scanf("%d", &rate);
	printf("Enter number of years : ");
	scanf("%d", &years);

	//printf("Results: %f - %f - %d\n", principal, rate, years);
	investment = ( principal * ( 1 - pow( (rate/100.00), (years + 1) ))) / (1 - rate/100.00);
	
	printf("Amount = $%.2f\n", investment);

	return 0;
}
