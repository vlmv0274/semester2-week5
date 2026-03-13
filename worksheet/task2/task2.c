/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Mathew Carling
 * Student ID: 201990775
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%8s", hex);

	for (int i = 0; hex[i] != '\0'; i++) {
        char hexletter = hex[i];
        int value;
		
		if (hexletter >= '0' && hexletter <= '9') {
			value = hexletter - '0';
		}
		else if (hexletter >= 'A' && hexletter <= 'F') {
			value = hexletter - 'A' + 10;
		}
		// if input contains invalid hex digit
		// printf("Error: Invalid Hexadecimal\n");
		else {
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}
		decimal = decimal * 16 + value;
	}

	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;

}

