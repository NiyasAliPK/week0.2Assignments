/*
 ============================================================================
 Name        : 2Assignment01.c
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
	int n1,n2,n3,small;
	printf("Enter three numbers :");
	scanf("%d%d%d",&n1,&n2,&n3);
	small = (n1<n2)?(n1<n3?n1:n2):(n2<n3?n2:n3);//if {if else}else{if else}
	printf("The smallest number among entered numbers is %d",small);
	return EXIT_SUCCESS;
}
