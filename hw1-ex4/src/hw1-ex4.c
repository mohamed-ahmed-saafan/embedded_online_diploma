/*
 ============================================================================
 Name        : hw1-ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float x,y,z;
	printf("enter two floating numbers to multiply\n");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	z=x*y;
	printf("the result is %f\n",z);
	fflush(stdout);
return EXIT_SUCCESS;
}
