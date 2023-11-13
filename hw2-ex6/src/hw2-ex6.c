/*
 ============================================================================
 Name        : hw2-ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int x;
	int i;
	int sum = 0;
	printf("enter a number\n");
	fflush(stdout);
	scanf("%d", &x);
	for (i = 0; i <= 100; i++) {
		sum += i;
	}
	printf("sum = %d\n", sum);
	return EXIT_SUCCESS;
}
