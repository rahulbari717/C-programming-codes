/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Rahul B.
 *  Here union is created for storing bit fileds
 *  This structure we used to store various fields of the packet in to variables
 *
 */
#include <stdio.h>
#include <stdint.h>

union Packet {
	uint32_t packetValue;

	struct {
		uint32_t crc		:2;
		uint32_t status		:1;
	    uint32_t payload	:12;
	    uint32_t bat		:3;
	    uint32_t sensor		:3;
	    uint32_t longAddr	:8;
	    uint32_t shortAddr	:2;
	    uint32_t addrMode	:1;
	}packetFields;
};

int main() {
	union Packet packet;

    printf("Enter the 32 bit packet value : ");
    scanf("%X",&packet.packetValue);

    printf("crc         :%#x \n",packet.packetFields.crc);
    printf("status      :%#x \n",packet.packetFields.status);
    printf("paylaod     :%#x \n",packet.packetFields.payload);
    printf("battery     :%#x \n",packet.packetFields.bat);
    printf("sensor      :%#x \n",packet.packetFields.sensor);
    printf("longAddr    :%#x \n",packet.packetFields.longAddr);
    printf("shortAddr   :%#x \n",packet.packetFields.shortAddr);
    printf("addrMode    :%#x \n",packet.packetFields.addrMode);

    printf("Size of struct is %zu \n", sizeof(packet.packetFields));

    while(getchar()!= '\n');
    getchar();
    return 0;
}

