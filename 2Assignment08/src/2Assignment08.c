/*
 ============================================================================
 Name        : 2Assignment08.c
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
	int temp,num,sum=0,c,r;
	printf("Enter a three digit number to check it is armstrong or not :");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		r=num%10;
		c=r*r*r;
		sum=sum+c;
		num=num/10;
	}
	num=temp;
	if(num==sum){
		printf("The number is an armstrong number :)");
	}else{
		printf("The number is not an armstrong number :(");
	}
	return EXIT_SUCCESS;
}
