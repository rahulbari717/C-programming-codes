/*
 * main.c
 *
 *  Created on: Oct 10, 2024
 *      Author: Rahul B.
 */

#include <stdio.h>

void add_number(int , int, int);
int substract(int a, int b);

int main(){

	add_number(12,5,6);
	int sub1= substract(12,5);

	printf("Substraction is ==> %d \n",sub1);

	printf("Press 'Enter' to exit this application");
	getchar();
	return 0;
}

void add_number(int a, int b, int c){
	// simple function definition without retun type
	int sum;
	sum = a+b+c;
	printf("Sum is ==> %d \n",sum);
}

int substract(int a, int b)
{
	int sub;
	sub = a-b;
	return sub;

}





