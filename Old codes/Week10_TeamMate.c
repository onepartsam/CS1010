// Week10_TeamMate.c

#include <stdio.h>
#include <string.h>

#define NUM_PLAYER 5
#define NAME_LEN  20

// function prototypes
int search_teammate(char[][NAME_LEN+1], int[], char[], char[]);
int search_player(char [][NAME_LEN+1], char []);

// completed!
int main(void)
{
	char names[NUM_PLAYER][NAME_LEN+1];
	int  ages[NUM_PLAYER];
	char genders[NUM_PLAYER];
	char player_name[NAME_LEN+1];
	int  i, result;

	printf("Enter %d players' info:\n", NUM_PLAYER);
	for (i=0; i<NUM_PLAYER; i++) 
		scanf("%s %d %c", names[i], &ages[i], &genders[i]);

	printf("The list of players is:\n");
	printf("Name\t\tAge\t\tGender\n");
	for (i=0; i<NUM_PLAYER; i++)
		printf("%s\t\t%d\t\t%c\n", names[i], ages[i], genders[i]);

	printf("Enter a player's name: ");
	scanf("%s", player_name);

	result = search_teammate(names, ages, genders, player_name);
	if (result == -2)
		printf("No such player %s.\n", player_name);
	else if (result == -1)
		printf("Sorry, can't find a teammate for %s!\n", player_name);
	else
		printf("%s's compatible teammate is %s.\n", player_name, names[result]);

	return 0;
}

// Look for the index of the player
// Return the index of the player in names array,
// Return -1 if not found
// This function is complete!
int search_player(char names[][NAME_LEN+1], char player_name[])
{
	int i;

	for (i=0; i<NUM_PLAYER; i++)
	{
		if ( strcmp(names[i], player_name) == 0 ) // match
			return i;  // return the index of the player
	}

	return -2;  // no such player!
}

// search for a student's compatible teammate
int search_teammate(char names[][NAME_LEN+1], int ages[], char genders[], char player_name[])
{
	int i, player_index, player_age;
	char player_gender;

	player_index = search_player(names, player_name);

	if (player_index == -2)
		return -2;  // no such player

	// write your code below
	// think logically what to do here
	for(i=0; i<NUM_PLAYER; i++)
	{
		if(ages[i] == ages[player_index] && genders[i]!=genders[player_index] )
		{
			return i;
		}
	}


	return -1;  // no teammate found
}
