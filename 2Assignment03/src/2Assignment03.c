/*
 ============================================================================
 Name        : 2Assignment03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int limit;
	int i,j,temp;
	printf("Enter the size for array");
	scanf("%d",&limit);
	int arr[limit];
	printf("Enter the values for array ");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<limit;i++){
		for(j=i+1;j<limit;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("The second largest number in array is %d",arr[1]);
	return EXIT_SUCCESS;
}
