/**
 * CS1010 AY2013/4 Semester 1 Lab1 Ex2
 * box.c
 * This program calculates the surface area of the box and diagonal measure of the box
 * Samuel Lim Yi Jie
 * Tutorial Group 24
*/

#include <stdio.h>
#include <math.h>

// Function Prototypes
double eval_area(int, int, int);
double eval_diag(int, int, int);

// Global Variables
int length, width, height;
double diagonal;

// Main Function
int main(void)
{
	length = width = height = diagonal = 0;

	printf("Enter length: ");
	scanf("%d", &length);
	printf("Enter width : ");
	scanf("%d", &width);
	printf("Enter height: ");
	scanf("%d", &height);

	printf("Surface area = %.0f\n", eval_area(length, width, height) );
	
	printf("Diagonal = %.2f\n", eval_diag(length, width, height) );

	return 0;
}

// returns the surface area of the box
double eval_area(int len, int wid, int hei)
{
	return 2*(len*hei + len*wid + hei*wid);
}

// returns the diagonal measurement of the box
double eval_diag(int len, int wid, int hei)
{
	return sqrt( pow(len,2) + pow(wid,2) + pow(hei,2) );
}
