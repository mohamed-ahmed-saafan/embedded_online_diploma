/*
 ============================================================================
 Name        : hw2-ex2.c
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
	scanf("%c", &x);
	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
		printf("the letter you entered s a vowel\n");
	} else {
		printf("the letter you entered is consonant");
	}
	return EXIT_SUCCESS;
}
