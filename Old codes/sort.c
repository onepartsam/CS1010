#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[],int size){

	int ii,i,j,k,
		tmp;

	for(i=0; i<size-1; i++){

		tmp = arr[i+1];

		for(j=0; tmp>arr[j];j++);

		for (k=i; k>=j ;k--)
			arr[k+1]=arr[k];

		arr[j]=tmp;

	}

	for(ii=0;ii<10;ii++) printf("%d ",arr[ii]);
	printf("\n");
}

int main(){

	int arr [10] = {7,3,6,1,2,8,4,9,0,5};
	insertionSort(arr,10);


	exit(0);
}
