/*
 * main.c
 *
 *  Created on: Oct 28, 2024
 *      Author: Rahul B.
 */
#include <stdio.h>
#include <stdint.h>

struct Packet {
	uint32_t crc		:2;
	uint32_t status		:1;
    uint32_t payload	:12;
    uint32_t bat		:3;
    uint32_t sensor		:3;
    uint32_t longAddr	:8;
    uint32_t shortAddr	:2;
    uint32_t addrMode	:1;
};

int main() {
    uint32_t packetValue;
    printf("Enter the 32 bit packet value : ");
    scanf("%X",&packetValue);

    struct Packet packet;

    packet.crc = (uint8_t) (packetValue &0x3);
    packet.status = (uint8_t) ((packetValue >> 2) & 0x1);
    packet.payload = (uint16_t) ((packetValue >> 3)&0xFFF);
    packet.bat = (uint8_t) ((packetValue >> 15) & 0x7);
    packet.sensor = (uint8_t) ((packetValue >> 18)&0x7);
    packet.longAddr = (uint8_t) ((packetValue >> 21) &0xFF);
    packet.shortAddr = (uint8_t) ((packetValue >> 29) & 0x3);
    packet.addrMode = (uint8_t) ((packetValue >> 31)&0x1);

    printf("crc         :%#x %u \n",packet.crc);
    printf("status      :%#x \n",packet.status);
    printf("paylaod     :%#x \n",packet.payload);
    printf("battery     :%#x \n",packet.bat);
    printf("sensor      :%#x \n",packet.sensor);
    printf("longAddr    :%#x \n",packet.longAddr);
    printf("shortAddr   :%#x \n",packet.shortAddr);
    printf("addrMode    :%#x \n",packet.addrMode);

    printf("Size of struct is %u \n", sizeof(packet));

    return 0;
}
