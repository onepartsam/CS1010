// if_to_switch.c
// To convert if statement into switch statement.
#include <stdio.h>

int main(void) {
	float score;
	char grade;

	// You may assume score entered is >= 0.0 and <= 100.0
	printf("Enter score: ");
	scanf("%f", &score);

	if (score >= 80.0)
		grade = 'A';
	else if (score >= 60.0)
		grade = 'B';
	else if (score >= 50.0)
		grade = 'C';
	else 
		grade = 'F';

	printf("Grade is %c.\n", grade);

	return 0;
}

