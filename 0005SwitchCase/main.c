/*
 * main.c
 *
 *  Created on: Oct 10, 2024
 *  Author: Rahul B.
 * 
 *  Exercise
 *  • Write a program to calculate the area of different geometrical figures
 *  • Circle , triangle , trapezoid , square and rectangle
 *  • The program should ask the user to enter the code for which user wants
 *  to find out the area
 *  • ‘t’ for triangle
 *  • ‘z’ trapezoid
 *  • ‘c’ circle
 *  • ‘s’ square
 *  • ‘r’ rectangle
 * 
 */

#include <stdio.h>
#include <stdint.h>

#define pi 3.1415

void wait_for_user_input(void);

int main(){
    int8_t code;
    float area,r,a,b,h;
    //float area = 0, r = 0, a = 0, b = 0, h = 0;

    printf("Area of calculatio Program \n ");
    printf("Circle      ==> c\n ");
    printf("Traingle    ==> t\n ");
    printf("Trapezoid   ==> z\n ");
    printf("Rectangel   ==> r\n ");
    printf("Square      ==> s\n ");

    printf("Enter the code here ==> ");
    scanf("%c",&code);

    switch (code )
    {
    case 'c':
        printf("Circle Area Calculation\n");
        printf("Enter radius(r) value ==> ");
        scanf("%f",&r);
        if(r < 0){
        	printf("radius cannot be -ve\n");
        	area = -1;
        }
        else{
        	area = pi*r*r;
        }
        break;

    case 't':
        printf("Triangle Area Calculation\n");
        printf("Enter base(b) value ==> ");
        scanf("%f",&b);
        printf("Enter height(h) value ==> ");
        scanf("%f",&h);
        if((b<0)||(h<0)){
        	printf("base or height cannot be -ve\n");
        	area = -1;
        }
        else{
        	area = (b*h)/2;
        }
        
        break;

     case 'z':
        printf("Trapezoid Area Calculation\n");
        printf("Enter base1(a) value ==> ");
        scanf("%f",&a);
        printf("Enter base2(b) value ==> ");
        scanf("%f",&b);
        printf("Enter height(h) value ==> ");
        scanf("%f",&h);
        if((b<0)||(h<0)||(a<0)){
        	printf("base1 or base2 or height cannot be -ve\n");
        	area = -1;
        }
        else{
        	area = ((a+b)/2)*h;
        }
        
        break;
    
    case 's':
        printf("Square Area Calculation\n");
        printf("Enter side(s) value ==> ");
        scanf("%f",&a);
        if((a<0)){
        	printf("side cannot be -ve\n");
        	area = -1;
        }
        else{
        	area = a*a;
        }
        
        break;
    
    case 'r':
        printf("Rectangle Area Calculation\n");
        printf("Enter length(b) value ==> ");
        scanf("%f",&b);
        printf("Enter width(h) value ==> ");
        scanf("%f",&h);
        if((b<0)||(h<0)){
        	printf("length or width cannot be -ve\n");
        	area = -1;
        }
        else{
        	area = (b*h);
        }
        
        break;

    default:
        printf("Invalid Input \n");
        area = -1;
        break;
    }

    if (!(area < 0))
    {
        printf("Area = %f \n",area);
    }
  
    wait_for_user_input();
}

void wait_for_user_input(void){
    printf("Press enter to exit this application");
    getchar();
    getchar();
}
