/***********************************************************
File Name: TempetureConverter.c
Author: Daniel Bachler
Course: CS120
Date created: 9-8-15
Brief Description: Converts degrees in farenheit
to celcius and returns the number.  It can also do C to F
************************************************************/
#include <stdio.h>

int main(void) {
		/* Creates the variables for the program */
		float tempF, tempC;
		char choice;
		
		printf("Convert to Celcius or Farenheit?(f or c)");
		
		while( ((choice = getchar()) != 'c') && (choice != 'f'))
		{
			if(choice != '\n'){
				printf("incorrect input, choose c or f");
			}
		}
		
		if(choice == 'c'){
			/* Asks user to input tempeture */
			printf("Tempeture in Farenheit to Convert to Celcius\n");
			/* Creates Input */
			scanf("%f", &tempF);
			/* Math to convert to F */
			tempC = (tempF - 32) / 1.8f;
			/* Prints Answer */
			printf("The tempeture in Celcius is %f°", tempC);
		}
		else if(choice == 'f') {
			/* Asks use to input tempeture */
			printf("Tempeture in Celcius to convert to Farenheit\n");
			/* Creates Input */
			scanf("%f", &tempC);
			/* Math to convert to C */
			tempF = (tempC * 1.8f) + 32;
			/* Prints output */
			printf("The tempeture in Farenheit is %f°", tempF);
		}
	return 0;
}