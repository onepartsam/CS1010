#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LENGTH 30
#define MAX_NUM_COURSES 20
#define MAX_NUM_STUDENTS 100

typedef struct {
	char name[NAME_LENGTH];
	int numCourses;
	int scores[MAX_NUM_COURSES];
} student_t;

// function prototypes
int readStudents(student_t students[], char *filename);
int findStudentByName(student_t students[], int numberStudents, char name[]);
float averageScore(student_t stu);
void printStudents(student_t stu[], int numStu);

// complete
int main(void)
{
	int numStu, index;
	float avgScore;
	char * filename = "Q5.in", name[NAME_LENGTH];
	student_t stu[MAX_NUM_STUDENTS];

	// for part (a)
	numStu = readStudents(stu, filename);
	printf("Number of students: %d\n", numStu);
	printStudents(stu, numStu);

	// for part (b)
	printf("Enter the name to search: ");
	scanf("%s", name);

	index = findStudentByName(stu, numStu, name);
	if (index != -1)
		printf("Index of %s in student array is %d\n", name, index);
	else
		printf("No student has this name %s\n", name);

	// for part (c)
	if (index != -1)
	{
		avgScore = averageScore(stu[index]);
		printf("Average score of %s is %.2f\n", name, avgScore);
	}

	return 0;
}

// part (a)
// Read student data from a file (assume at most 100 students)
int readStudents(student_t students[], char *fileName)
{
	FILE *fhd = fopen(fileName, "r");
	int counter = 0; 
	int course; 

	if (fhd == NULL)
		return 0;

	while ( fscanf(fhd, "%s", students[counter].name ) == 1 )
	{
		fscanf(fhd, "%d", &students[counter].numCourses);
		for (course = 0; course < students[counter].numCourses; 
				course++)
		{ 
			fscanf(fhd, "%d", &students[counter].scores[course]);
		}
		counter++;
	}
	fclose (fhd);
	return counter;

}

// part (b)
// Return the index of the first student
// whose name matches the given name.
// Return -1 if student is not found.
int findStudentByName(student_t students[],
		int numberStudents, char name[])
{
	// fill in your code below
	int i;

	for(i=0; i<numberStudents; i++)
	{
		if(!strcmp(students[i].name, name))
		{
			return i;
		}
	}

	return -1;
}


// part (c)
// Return the average score of a student.
float averageScore(student_t stu)
{
	// fill in your code below
	int i;
	float total = 0;

	for(i=0; i<stu.numCourses; i++)
	{
		total += stu.scores[i];
	}

	return total/stu.numCourses;
}

// Given
// Print out student list
void printStudents(student_t stu[], int numStu)
{
	int i, j;

	for (i=0; i<numStu; i++)
	{
		printf("%2d: %s", i, stu[i].name);
		for (j=0; j<stu[i].numCourses; j++)
			printf(" %d", stu[i].scores[j]);
		printf("\n");
	}
}
