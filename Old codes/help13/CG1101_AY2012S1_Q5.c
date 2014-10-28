#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STU 20000   // maximum students in a university
#define MAX_MOD 8       // maximum 8 modules to take in one sem

typedef struct {
	char name[40];           // student name
	int numMods;             // number of modules taken
	char grade[MAX_MOD][3];  // grades of modules taken
} student_t;

// function prototypes
int read_roster(student_t []);
double get_grade_point(char []);
double get_max_CAP(student_t [], int);
double get_median_CAP(student_t [], int);
int different_names(student_t [], int);

int main(void)
{
	int num;
	student_t stu[MAX_STU];
	// printf("This: %f",get_grade_point("D+"));
	// read number of students and
	// student data for every university student
	num = read_roster(stu);

	printf("median cap: %.2f\n", get_median_CAP(stu, num));

	return 0;
}

// Given
// Read student data from a file
int read_roster(student_t stu[])
{
	int count = 0, i;
	char filename[100];
	FILE *infile;

	printf("Enter file name of a roster: ");
	scanf("%s", filename);
	infile = fopen(filename, "r");
	if(infile == NULL)
	{
		printf("Can't open roster file.\n");
		exit(0);   // quit the program
	}

	do
	{
		if ( fscanf(infile, "%s %d", stu[count].name,
					&stu[count].numMods) != 2 )
			break;
		for (i = 0; i < stu[count].numMods; i++)
			fscanf(infile, "%s", stu[count].grade[i]);
		count++;
	} while(1);

	fclose(infile);

	return count;
}

// (a) return grade point of a grade
double get_grade_point(char grade[])
{
	// fill in your code below
	char grades[11][3] = {"A+","A","A-","B+","B","B-","C+","C","D+","D","F"};
	float points[11] = {5,5,4.5,4,3.5,3,2.5,2,1.5,1,0};

	int i=0;
	for(i=0;i<11;i++)
	{
		if( !strcmp(grade,grades[i]) )
			return points[i];
	}
	return 1;
}

// (b) return the median CAP of all students
double get_median_CAP(student_t stu[], int numStu)
{
	int i,j,limit;
	double total,temp,cap[200]; // store CAPs of all students

	// fill in your code below
	for(i=0;i<numStu;i++)
	{
		total = 0;

		for(j=0;j<stu[i].numMods;j++)
		{
			total+=get_grade_point(stu[i].grade[j]);	
		}

		cap[i]=total/stu[i].numMods;
		printf("Test......%f\n", cap[i]);
	}

	for (limit = numStu-2; limit >= 0; limit--)
	{
		// limit is where the inner loop variable i should end

		for (i=0; i<=limit; i++) // one pass
		{
			if (cap[i] > cap[i+1])  // swap cap[i] with cap[i+1]
			{
				temp = cap[i];
				cap[i] = cap[i+1];
				cap[i+1] = temp;
			}
		}
	}

	
	for(i=0;i<numStu;i++)
	{
		printf("Test...%f\n", cap[i]);
	}

	if(!(numStu%2))
	{
		return (cap[numStu/2-1] + cap[numStu/2])/2;
	}
	else
		return cap[numStu/2];
	return 0;
}
