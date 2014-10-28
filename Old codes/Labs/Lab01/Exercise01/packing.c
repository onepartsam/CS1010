/**
 * CS1010 AY2013/4 Semester 1 Lab1 Ex3
 * packing.c
 * You are to find the maximum number of slabs that can be packed into the tray.
 * The slabs may be packed in either one of the two orientations, but not in a mix of orientations.
 * Sameul Lim Yi Jie
 * Tutorial Grp 24
 */

#include <stdio.h>

//Function prototype
int compute_max_slabs(int, int, int, int);

int main(void)
{
	int t1, t2, s1, s2; // (t) tray (s) slab (m) method
	t1=t2=s1=s2=0;
	printf("Enter dimension of tray: ");
	scanf("%d %d", &t1, &t2);

	printf("Enter dimension of slab: ");
	scanf("%d %d", &s1, &s2);

	printf("Maximum number of slabs = %d\n", compute_max_slabs(t1, t2, s1, s2) );

	return 0;
}

//returns the max number of slabs needed to pack the tray
int compute_max_slabs(int tt1, int tt2, int ss1, int ss2)
{
	int m1, m2, m;
	m1 = (tt1/ss1) * (tt2/ss2);
	m2 = (tt1/ss2) * (tt2/ss1);

	if(m1>m2)
		m=m1;
	else
		m=m2;

	return m;
}
