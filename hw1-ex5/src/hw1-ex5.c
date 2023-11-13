/*
 ============================================================================
 Name        : hw1-ex5.c
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
	printf("type a letter\n");
	fflush(stdout);
	scanf("%c", &x);
	int y = x;
	printf("the ASCII CODE value for the letter you entered is %d\n", y);
	return EXIT_SUCCESS;
}
