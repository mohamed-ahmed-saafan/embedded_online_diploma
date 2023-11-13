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
	 int var1, var2,temp;
	    printf("Enter Value of var1 ");
	    fflush(stdout);
	    scanf("%d", &var1);
	    printf("\nEnter Value of var2 ");
	    fflush(stdout);
	    scanf("%d", &var2);
	    temp=var1;
	    var1=var2;
	    var2=temp;
	    printf("\nAfter Swapping: var1 = %d, var2 = %d", var1, var2);
	    fflush(stdout);
	return EXIT_SUCCESS;
}
