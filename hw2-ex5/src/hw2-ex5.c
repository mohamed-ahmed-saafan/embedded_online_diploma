/*
 ============================================================================
 Name        : hw2-ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("enter a letter\n");
	fflush(stdout);
	scanf("%c",&x);
	if((int)x<97){
		printf("%c is an alphabet\n",x);
		fflush(stdout);
	}
	else {
		printf("%c is not an alphabet\n",x);
	}
	return EXIT_SUCCESS;
}
