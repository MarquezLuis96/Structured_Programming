/*
	-> Date: 2020/10/26
	-> Author: Luis Marquez
	-> Description:
			//
*/

//LIBRARIES
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//STRING LENGHT
const int strLength = 50;

//NAMESPACE DECLARATION
using namespace std;

//DATA STRUCTURE: PERSONALDATA
struct personalData {
	int ID;
	char name[strLength];
	char surName[strLength];
	int age;
};

//FUNCTIONS

//THIS FUNCTION RECEIVES A CHAR ARRAY (MESSAGE) AND RETURN AN INT VALUE
int readInt(const char** str) {
	//AUXILIAR INT
	int i = 0;

	//PRINTING THE MESSAGE
	printf(*str);

	//SCANNING  THE INT VALUE
	scanf_s("%d", &i);

	//RETURNING THE INT VALUE
	return i;
}

//THIS FUNCTION RECEIVES A CONST CHAR** ARRAY (MESSAGE) AND MODIFIES ANOTHER BY REFERENCE
void readStr(const char** str, char* strMod) {
	//PRINTING THE MESSAGE
	printf(*str);

	//MODIFYING THE REFERENCE STRING
	cin.getline(strMod, strLength);
}

//READPD: THIS FUNCTION IS IN CHARGE OF GATHERING TE DATA OF THE STRUCTURE PERSONALDATA
personalData readPD() {
	//AUX PERSONALDATA
	personalData p;
	//AUXILIAR CHAR ARRAY
	const char* str[strLength];

	//PRINTING A MESSAGE
	printf("\nEnter the user data:\n");

	//ASKING ID
	*str = "\nType the ID number: ";
	p.ID = readInt(str);
	printf("\n");
	cin.ignore();
	//ASKING NAME
	*str = "Type the user name: ";
	readStr(str, p.name);
	printf("\n");
	//ASKING SURNAME
	*str = "Type the user surname: ";
	readStr(str, p.surName);
	printf("\n");
	//ASKING AGE
	*str = "Type the user age: ";
	p.age = readInt(str);
	printf("\n");

	//RETURNING A PERSONALDATA OBJECT
	return p;
}

//PRINTPD: THIS FUNCTION PRINTS AN PERSONALDATA OBJECT
void printPD(personalData p) {
	//PRINTING ID
	printf("\nID: %i", p.ID);
	printf("\n");
	//PRINTING NAME
	printf("\nName: "); puts(p.name);
	printf("\n");
	//PRINTING SURNAME
	printf("Surname: "); puts(p.surName);
	printf("\n");
	//PRINTING AGE
	printf("Age: %i", p.age);
	printf("\n");
}

//cFILE: THIS FUNCTION CREATES A FILE
void cFile() {
	//PRINTING A MESSAGE
	printf("\nCreating the file 'pdFile.dat ...'\n");

	//FILE DECLARATION
	FILE* file;

	//NAMING FILE
	const char* name = "pdFile.dat";
	const char* mode = "w";

	//OPENING FILE
	fopen_s(&file, name, mode);

	//VERIFYING FILE CREATION
	if (file != NULL) {
		//PRINTING A SUCCESS MESSAGE
		printf("\nFile '%s' created successfully...\n", name);
		//CLOSING THE FILE
		fclose(file);
	}
	else {
		//PRINTING A FAIL MESSAGE
		printf("\nError: The file '%s' was not created successfully...\n", name);
	}
}

//WFILE: tHIS FUNCTION WRITES ON A FILE
void wFile(personalData p) {
	//FILE DECLARATION
	FILE* file;

	//NAMING FILE
	const char* name = "pdFile.dat";
	const char* mode = "wb";

	//OPENING FILE
	fopen_s(&file, name, mode);

	//VERIFYING IF THE FILE IS OPEN
	if (file == NULL) {
		//PRINTING A FAIL MESSAGE
		printf("\nError: The file %s wasn't opened successfully.\n", name);

	}
	else {
		//PRINTING A SUCCESS MESSAGE
		printf("\nThe file %s is open.\n", name);
		printf("Writting on the file...\n");

		//CLEARING THE BUFFER
			fflush(stdin);
		
		//PROCEEDING TO WRITE
			fwrite(&p, sizeof(p), 1, file);
			
		//PRINTING A CLOSING MESSAGE
			printf("ID: %i. Personal data added.\nClosing file '%s'...\n", p.ID, name);

		//CLOSING FILE
			fclose(file);

		//PRINTING A SUCCESS MESSAGE
			printf("\nFile '%s' closed...\n", name);
	}
}

void rFile() {
	//FILE DECLARATION
		FILE* file;

	//NAMING FILE
		const char* name = "pdFile.dat";
		const char* mode = "rb";

	//PRINTING AN OPENING FILE
		printf("\nOpening file '%s'...\n", name);

	//OPENING FILE
		fopen_s(&file, name, mode);

	//VERIFYING IF THE FILE IS OPEN
		if (file == NULL) {
			//PRINTING A FAIL MESSAGE
				printf("\nThe file '%s' wasn't opened successfully.\n", name);
		}
		else {

			//PRINTING SUCCESS OPENED FILE MESSAGE
				printf("\nFile opened successfully...\n", name);

			//DECLARING THE STRUCT PERSONAL DATA TO READ A PERSON
				personalData p;

			//READING THE FILE
				fread(&p, sizeof(p), 1, file);

			//PRINTING READED PERSONAL DATA
				printPD(p);

			//PRINTING A CLOSING MESSAGE
				printf("\nFile '%s' readed successfully.\nClosing file'%s'...\n", name);

			//CLOSING FILE
				fclose(file);

			//PRINTING A SUCCESS CLOSED MESSAGE
				printf("\nFile '%s' successfully closed.\n", name);
		}
}

//RUN FUNCTION
void run() {
	//STRUCT THAT I'LL TO MANIPULATE
		struct personalData person;

	//WELCOME MESSAGE
		printf("Welcome!\n");

	//READING STRUCT DATA
		person = readPD();
		printf("\n");

	//PRINTING STRUCT DATA
		printf("Printing personal data...\n");
		printPD(person);
		printf("\n");

	//CREATING A FILE
		cFile();

	//WRITTING ON THE FILE
		wFile(person);

	//READING FILE
		rFile();
}

//MAIN FUNCTION
int main() {
	run();
	return 0;
}