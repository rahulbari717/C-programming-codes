/*
 * main.c
 *
 *  Created on: Oct 10, 2024
 *      Author: Rahul B.
 */


#include <stdio.h>
#include "math.h"

int main(){

	printf("Add : %d\n", add(330,3));
	printf("Substration  : %d\n", sub(33,3));
	printf("Multiplication : %lld\n", mul(333,33));
	printf("Division  : %f\n", div(333,33));

	printf("Press 'Enter' to exit this application");
	getchar();
	return 0;
}

