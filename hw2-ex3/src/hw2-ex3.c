/*
 ============================================================================
 Name        : hw2-ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,z;
	printf("enter 3 numbers \n");
	fflush(stdout);
	scanf("%d %d %d",&x,&y,&z);
	if(x>y&&x>z){
		printf("%d is the largest number\n",x);
		fflush(stdout);
	}
	else if (y>x&&y>z){
		printf("%d is the largest number\n",y);
		fflush(stdout);
	}
	else{
		printf("%d is the largest number\n",z);
		fflush(stdout);
	}
	return EXIT_SUCCESS;
}
