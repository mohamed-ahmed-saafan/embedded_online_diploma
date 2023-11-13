/*
 ============================================================================
 Name        : hw2-ex8.c
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
	float y,z,result;
	printf("enter the operator\n");
	fflush(stdout);
	scanf("%c",&x);
	printf("enter the two numbers\n");
	fflush(stdout);
	scanf("%f %f",&y,&z);
	switch (x){
	case '+' :
		result=y+z;
		break;
	case '-':
		result=y-z;
		break;
	case '*':
		result=y*z;
		break;
	case '/' :
		result=y/z;
		break;
	}
	printf("the result = %.2f\n",result);

	return EXIT_SUCCESS;
}
