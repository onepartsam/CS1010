// Week12_Perimeter.c
// This program reads the lengths of the sides of a rectangle,
// and computes the minimum perimeter after folding the rectangle
// once along the x-axis or y-axis. 

#include <stdio.h>

typedef struct
{
	int side1, side2;
} rect_t;

rect_t read_rect();
int  min_peri(rect_t);

int main(void)
{
	rect_t rect;
	// No extra variable is needed

	rect = read_rect();

	printf("Perimeter = %d\n", min_peri(rect));

	return 0;
}

rect_t read_rect()
{
	rect_t rect;
	printf("Enter lengths: ");
	scanf("%d %d", &rect.side1, &rect.side2);

	return rect;
}

int min_peri(rect_t rect)
{
	int perimeter;

	if(rect.side1 > rect.side2)
		perimeter = 2 * ( rect.side1/2.0 + rect.side2 );
	else
		perimeter = 2 * ( rect.side1 + rect.side2/2.0 );

	return perimeter;
}
