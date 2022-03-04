/*
 ============================================================================
 Name        : 2Assignment04.c
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
	int k,i,j;
	printf("Enter the size for array :");
	scanf("%d",&limit);
	int arr[100];
	printf("Enter the values for array :");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<limit;i++){
		for(j=i+1;j<limit;j++){
			if(arr[i]==arr[j]){
			for(k=j;k<limit-1;k++){
				arr[k]=arr[k+1];
				}
			limit--;
			j--;
			}
		}
	}
	for(j=0;j<=limit-1;j++){
		printf("%d,",arr[j]);
	}
	return EXIT_SUCCESS;
}
