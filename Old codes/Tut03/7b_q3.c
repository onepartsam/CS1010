#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	
	do
	{
		printf("Enter score: ");
		scanf("%d", &score);
	}
	while( score < 0 || score > 10 );
	
	switch (score)
	{
		case 10:
		case 9:
		case 8: grade = 'A'; break;
		case 7:
		case 6: grade = 'B'; break;
		case 5: grade = 'C'; break;
		default: grade = 'F';
	}
	printf("Grade is %c.\n", grade);
	
	return 0;
}



