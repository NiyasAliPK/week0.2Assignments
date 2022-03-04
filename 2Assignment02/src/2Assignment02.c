/*
 ============================================================================
 Name        : 2Assignment02.c
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
	int limit,count=0,visited=-1;
	int i,j;
	printf("Enter the size for array:");
	scanf("%d",&limit);
	int arr1[limit],arr2[limit];
	printf("Enter the values for array :");
	for(i=0;i<limit;i++){
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<limit;i++){
		 count=1;
		for(j=i+1;j<limit;j++){
			if(arr1[i]==arr1[j]){
				count++;
				arr2[j]=visited;
			}
		}
		if(arr2[i]!=visited){
			arr2[i]=count;
		}
	}
	for(i=0;i<limit;i++){
		if(arr2[i]!=visited){
			printf("%d Repeated %d times\n",arr1[i],arr2[i]);
		}
	}
	return EXIT_SUCCESS;
}
