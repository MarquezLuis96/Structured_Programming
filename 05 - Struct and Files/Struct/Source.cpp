#include <stdlib.h>
#include <stdio.h>
#include <iostream>
const int stringSpace = 50;

using namespace std;

struct user {
	int id;
	char name[stringSpace];
	char surNam[stringSpace];
	char email[stringSpace];
	char gender;
};

void askChar(char* str) {

	cin.getline(str, stringSpace);

}


char askC() {

	char ret;
	scanf_s("%c", &ret);

	return ret;
}

int askInt() {
	int i = 0; 

	cin.ignore();
	scanf_s("%i", &i);

	return i;
}

user addU() {
	user u;

	printf("\nType the user ID number: ");
	u.id = askInt();
	printf("\n");
	cin.ignore();

	printf("Type the user name: ");
	askChar(u.name);
	printf("\n");

	printf("Type the user surname: ");
	askChar(u.surNam);
	printf("\n");

	printf("Type the user e-mail: ");
	askChar(u.email);
	printf("\n");

	printf("Type the user gender (M/F): ");
	u.gender = askC();
	printf("\n");

	return u;
}

void printUL(user uL[], int aU) {
	for (int i = 0; i < aU; i++) {
		printf("\nID: %i", uL[i].id);
		printf("\n");
		printf("Name: "); puts(uL[i].name);
		printf("\n");
		printf("Surname: "); puts(uL[i].surNam);
		printf("\n");
		printf("e-mail: "); puts(uL[i].email);
		printf("\n");
		printf("Gender: %c", uL[i].gender);
		printf("\n");
	}
}

void run() {

	int nU=5, opc=0, aU=0;
	user uList[10];

	printf("Welcome to the program to fill and show an struct variable.\n");
	printf("How many users you are going to add (Approximately (Less than 10)): ");
	scanf_s("%i", &nU);
	printf("\n");

	bool ban = true;

	do {
		printf("Press:\n1)To add an user\n2)To print the list of users\n0)To exit of the program\n");
		scanf_s("%i", &opc);
		switch (opc) {
			case 0:
				printf("Bye!");
				ban = false;
				break;

			case 1:
				if (aU < nU) {
					uList[aU++] = addU();
				}
				else {
					printf("Error: Full list.\n");
				}
				break;

			case 2:
				printUL(uList, aU);
				break;

			default:
				printf("No valid option. Try again...\n");
				ban = true;
				break;
		}
	} while (ban == true);


}

int main() {
	run();
	return 0;
}