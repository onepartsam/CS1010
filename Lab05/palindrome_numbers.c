/**
 * CS1010 AY2013/4 Semester 1 Lab5 Ex1
 * palindrome_numbers.c
 * 
 * This program reads two positive integers: a start value and an end value (end value is greater than or equal to the start value),
 * and computes the number of palindrome numbers in the range from start to end, both inclusive.
 * (NOTE: You may assume that the largest integer input contains at most 9 digits.)
 * Samuel Lim Yi Jie
 * T24
 */

#include <stdio.h>
#define LEN 9

int isPalindrome(int [], int);
int palindromeRecur(int [], int, int);

int main(void)
{
	int low, high, temp, diff, count=0, i, size,
		arr[LEN]={0};
	
	printf("Enter start and end: ");
	scanf("%d %d", &low, &high);
	
	diff=high-low;
	
	//Loop from lower bound to higher bound of the range
	for(i=0; i<=diff; i++)
	{
		temp=low+i;
		
		//Number extraction to array
		for(size=0; temp>0; size++)
		{
			arr[size]=temp%10;
			temp/=10;
		}
		
		count += isPalindrome(arr, size);
		
		//Debug: printf("Size for %d: %d\n", low+i, size);
	}
	
	printf("Number of palindrome numbers = %d\n", count);

	return 0;
}

// Return 1 if arr is a palindrome, or 0 otherwise.
// Driver function to call recursive function palindromeRecur()
int isPalindrome(int arr[], int size)
{
	return palindromeRecur(arr, 0, size);
}

// Recursive function: Return 1 if arr is a palindrome, or 0 otherwise.
int palindromeRecur(int arr[], int start, int size)
{
	if( ( start+1 == size-1 ) || start == size-1 )
	{
		return arr[start] == arr[size-1];
	}
	else
	{
		if( arr[start] == arr[size-1] )
		{
			return 1 * palindromeRecur(arr, start+1, size-1);
		}
		else
		{
			return 0;
		}
	}
}

