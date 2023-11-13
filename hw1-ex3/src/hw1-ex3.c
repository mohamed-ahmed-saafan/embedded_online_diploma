/*
 ============================================================================
 Name        : hw1-ex3.c
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
printf("enter two integers to add\n");
fflush(stdout);
scanf("%d %d",&x,&y);
z=x+y;
printf("the sum of the two numbers is %d\n",z);
fflush(stdout);


return EXIT_SUCCESS;
}
