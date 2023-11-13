/*
 ============================================================================
 Name        : hw2-ex1.c
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
	scanf("%d", &x);
	if (x % 2 == 0) {
		printf("the number you entered is a even number\n");
	} else {
		printf("the number you entered is a odd number\n");
	}

	return EXIT_SUCCESS;
}
