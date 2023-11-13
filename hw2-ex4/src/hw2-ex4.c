/*
 ============================================================================
 Name        : hw2-ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("enter a number\n");
	fflush(stdout);
	scanf("%d",&x);
	if(x>0){
		printf("%d is a positive number\n",x);
		fflush(stdout);
	}
	else if (x<0){
		printf("%d is a negative number\n",x);
		fflush(stdout);
	}
	else {
		printf("the number is ZERO");
	}
	return EXIT_SUCCESS;
}
