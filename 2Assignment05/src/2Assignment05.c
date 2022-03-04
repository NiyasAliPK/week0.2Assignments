/*
 ============================================================================
 Name        : 2Assignment05.c
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
	int i,j;
	char str[30];
	printf("Enter the size of string :");
	scanf("%d",&limit);
	printf("Enter a string:");
	scanf("%s",str);
	for(i=0;i<limit;i++){
		for(j=i+1;j<limit;j++){
			printf("%c%c",str[i],str[j]);
			printf("\n");
		}
	}
	return EXIT_SUCCESS;
}
