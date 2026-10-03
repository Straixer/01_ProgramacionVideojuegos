#include <stdio.h>

void ejercicio1() {
	int number = 0;
	unsigned int unsignedNumber = 2;
	long int longNumber = 23445;
	short int shortNumber = 3;
	float floatNumber = 2.33f;
	double doubleNumber = 34.34;
	char character = 's';
	char string[] = "Cadena de Texto";
	printf("int: %d\n"
		"unsigned int: %u\n"
		"long int: %ld\n"
		"short int: %hd\n"
		"float: %f\n"
		"double: %f\n"
		"char: %c\n"
		"string: %s\n",
		number,
		unsignedNumber,
		longNumber,
		shortNumber,
		floatNumber,
		doubleNumber,
		character,
		string);
}