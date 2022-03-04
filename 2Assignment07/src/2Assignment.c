/*
 ============================================================================
 Name        : 2Assignment.c
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
int limit,count=0,flag=0;
int i,j,k=0;
int arr[100];
printf("Enter the size for array :");
scanf("%d",&limit);
printf("Enter the values for array :");
for(i=0;i<limit;i++){
	scanf("%d",&arr[i]);
}
for(i=0;i<limit;i++){
	for(j=2;j<=arr[i]/2;j++){
		if(arr[i]%j==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d,",arr[i]);
	}
}
//printf("Prime numbers in this array are :");
//for(j=0;j<count;j++){
//	printf("%d,",prime[j]);
//}
return EXIT_SUCCESS;
}
