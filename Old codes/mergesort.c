#include<stdio.h>
#include<stdlib.h>

void mergesort(int input[], int size);
void merge(int a[], int sizeA, int b[], int sizeB, int result[]);

int main(){

	int arr[]={3,2,1,4,0,7,5,6};
	mergesort(arr,8);
	
	int i;
	for(i=0; i<8; i++)
		printf("%d", arr[i]);

	exit(0);
}

void mergesort(int input[], int size){

	if(size==1) return ;

	int sizeA, sizeB;

	if(size%2)
		sizeA = 1 + (sizeB = size/2);
	else
		sizeA = sizeB = size/2;

	int a[sizeA], b[sizeB];

	int i;
	for(i=0;i<sizeA;i++)	a[i] = input[i];
	for(;i<size;i++)		b[i-sizeA] = input[i];

	mergesort(a,sizeA);
	mergesort(b,sizeB);

	merge(a,sizeA,b,sizeB,input);
}

void merge(int a[], int sizeA, int b[], int sizeB, int result[])
{
	int i=0, j=0, k=0;
	
	while(i<sizeA && j<sizeB)
	{
		if(a[i] < b[j])
			result[k++] = a[i++];
		else
			result[k++] = b[j++];
	}

	for(;i<sizeA;i++)
		result[k++] = a[i];
	for(;j<sizeB;j++)
		result[k++] = b[j];

}
