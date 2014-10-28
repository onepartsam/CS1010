// countWords.c
#include <stdio.h>
#include <ctype.h>
#define LENGTH 50

int word_count(char []);

int main(void) {

	char sentence[LENGTH];
	printf("Enter a sentence with at most %d characters:\n", LENGTH);
	
	//Get string
	fgets(sentence, LENGTH, stdin);

	printf("Sentence = %s\n", sentence); 
	
	printf("Word count = %d\n", word_count(sentence));

	return 0;
}

// Count the number of words in str
int word_count(char str[])
{
	int i,total=0,hasAlpha=0;
	
	for(i=0;i<LENGTH;i++)
	{
		if( isalpha(str[i]) )
			hasAlpha=1;
		else if( ( isspace(str[i]) || str[i]=='\0') && hasAlpha )
		{
			total++;
			hasAlpha=0;
		}

	}

	return total;
}

