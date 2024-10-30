/*
 * main.c
 *
 *  Created on: Oct 25, 2024
 *      Author: Rahul B.
 */
#include <stdio.h>
#include <stdint.h>

struct carModel
{
    uint32_t carNumber;
    uint32_t carPrice;
    uint16_t carMaxSpeed;
    float carWeight;
};

struct DataSet {
    char data1;
    int data2;
    char data3;
    short data4;
    // float data4;
};

int main(){
	
    struct carModel carBMW = {2021,15000,220,1330};     // c89 method 
    struct carModel carFord = {.carMaxSpeed = 400,.carNumber = 500};    // c99 method . operator used for this.

    printf("\n Details of car BMW as follows \n");
    printf("carNumber = %u\n",carBMW.carNumber);

    printf("size of struct carModel us %lu \n ", sizeof(carBMW));

    struct DataSet data;
    data.data1 = 0x11;                      // char is 1 byte 
    data.data2 = 0xFFEEDDCC;                // int is 4 byte 
    
    data.data3 = 0xAB;                    // char is 1 byte 
    data.data4 = 0xCDEF;
    // data.data4 = 0.99;                      // float is 4 bytes 

    uint8_t *ptr;

    ptr = (uint8_t *) &data;

    uint32_t totalSize = sizeof(struct DataSet);

    printf("Memory address          Content   \n");
    printf("==================================\n");
    
    for (uint32_t i = 0; i <= totalSize; i++){
        printf("%p, %X \n",ptr,*ptr);
        ptr++;
    }

    printf("Total memory consumed by this struct variable = %lu", sizeof(data));

	printf("Press 'Enter' to exit this application");
	getchar();
	return 0;
}