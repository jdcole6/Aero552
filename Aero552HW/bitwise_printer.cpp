/*
 * Jack Cole
 * HW 1
 * AERO 552
 *
 * bitwise_printer.cpp
 * 	description
 */

#include <stdio.h>

void print_bits(short shortNum) {
	unsigned short size = sizeof(short);
	unsigned short max = 1 << (8*size - 1);
	for (int i = 0; i < 8*size; i++) {
		printf("%u ", shortNum & max ? 1 : 0);
		shortNum = shortNum << 1;
	}
}

void print_bits(int intNum) {
	unsigned int size = sizeof(int);
	unsigned int max = 1 << (8*size - 1);
	for (int i = 0; i < 8*size; i++) {
		printf("%u ", intNum & max ? 1 : 0);
		intNum = intNum << 1;
	}
}

void print_bits(long longNum) {
	unsigned long size = sizeof(long);
	unsigned long max = 1 << (8*size - 1);
	for (int i = 0; i < 8*size; i++) {
		printf("%u ", longNum & max ? 1 : 0);
		longNum = longNum << 1;
	}
}
