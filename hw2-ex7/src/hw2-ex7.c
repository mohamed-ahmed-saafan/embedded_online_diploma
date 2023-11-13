/*
 ============================================================================
 Name        : hw2-ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,i;
	int fact=1;
	printf("enter a number\n");
	fflush(stdout);
	scanf("%d",&x);
	if(x<0){
		printf("factorial doesn't exist\n");
		fflush(stdout);
	}
	else if (x==0){
		fact=1;
		printf("factorial = %d",fact);
	}
	else {
	for(i=1;i<=x;i++){
		fact*=i;
	}
		printf("factorial of number %d = %d\n",x,fact);
	}
	return EXIT_SUCCESS;
}
