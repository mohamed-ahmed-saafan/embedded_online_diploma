/*
 ============================================================================
 Name        : hw1-ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	printf("enter the value of the x variable \n");
	fflush(stdout);
	scanf("%d",&x);
	printf("enter the value of y variable\n");
	fflush(stdout);
	scanf("%d",&y);
	x = x + y;
	y = x - y; //y=(x+y)-y = y=xold
	x = x - y;

	printf("the value of x=%d\n",x);
	fflush(stdout);
	printf("the value of y=%d\n",y);
	return EXIT_SUCCESS;
}
