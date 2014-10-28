#include <stdio.h>
#define MAX 10

int compute_score(char word[]);

int main()
{
	char word[MAX]={'\0'};
	printf("Word please:");
	scanf("%s", word);
	
	printf("%d\n", compute_score(word));

	return 0;
}

int compute_score(char word[])
{
	int i, total=0;
	
	for(i=0; i<MAX; i++)
	{
		if(word[i]==0)
			break;
		else if(word[i]=='Q' || word[i]=='Z')
			total+=10;
		else if(word[i]=='J' || word[i]=='X')
			total+=8;
		else if(word[i]=='K')
			total+=5;
		else if(word[i]=='F' || word[i]=='H' || word[i]=='V' || word[i]=='W' || word[i]=='Y')
			total+=4;
		else if(word[i]=='B' || word[i]=='C' || word[i]=='M' || word[i]=='P')
			total+=3;
		else if(word[i]=='D' || word[i]=='G')
			total+=2;
		else
			total+=1;
	}

	return total;
}
