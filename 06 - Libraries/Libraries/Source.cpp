/*
	Date: 2020/10/26
	Author: Luis Marquez
	Description:
			//
*/

//HEADERS/LIBRARIES
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//INCLUDING MY OWN LIBRARIE
#include "mylibrarie.h"

//NAMESPACE DECLARATION
using namespace std;



//RUN: THIS FUNCTION CONTROLE THE WORKFLOW PROGRAM
void run() {
	//FLAG
	bool flag = true;

	//PRINTING A WELCOME MESSAGE
		printf("Welcome!\n");

	do {
		//OPTION  TO SELECT OPERATION
			int opc = 0;

		//OPERATION VALUES
			float valueA, valueB;

		//WRITTING SELECTION
			//PRINTING SELECTION MESSAGE
				printf("\nType:\n1)To Add\n2)Substract\n3)Multiply\n4)Divide\n0)Exit\nType: ");
			//SCANNING SELECTION
				scanf_s("%i", &opc);

				if (opc != 0) {
					//WRITTING OPERATION VALUES
						//PRINTING OPERATION VALUES MESSAGE
							printf("\nWrite the first value: ");
						//SCANNING OPERATION VALUES
							scanf_s("%f", &valueA);
							printf("\n");
						//PRINTING OPERATION VALUES MESSAGE
							printf("\nWrite the second value: ");
						//SCANNING OPERATION VALUES
							scanf_s("%f", &valueB);
							printf("\n");
				}

		//SELECTING OPERATION
			switch (opc) {
				case 0:
					//CHANGING THE FLAG VALUE TO EXIT CYCLE
					flag = false;

					//PRINTING AN EXIT MESSAGE
					printf("\nBye!\n");
					break;

				case 1:
					printf("\nResult: %f + %f = %f\n", valueA, valueB, add(valueA, valueB));
					break;

				case 2:
					printf("\nResult: %f - %f = %f\n", valueA, valueB, subs(valueA, valueB));
					break;

				case 3:
					printf("\nResult: %f * %f = %f\n", valueA, valueB, mult(valueA, valueB));
					break;

				case 4:
					if (valueB == 0) {
						printf("\nDivision by zero doesn't exist\n");
						break;
					}
					else {
						printf("\nResult: %f / %f = %f\n", valueA, valueB, div(valueA, valueB));
						break;
					}
			}
	} while (flag);
}

//MAIN FUNCTION
int main() {
	run();
	return 0;
}