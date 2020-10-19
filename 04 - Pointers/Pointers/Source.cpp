#include <stdlib.h>
#include <stdio.h>

int main() {

	int value = 0;

	printf("The value stored in 'Value' is: %i \n", value);
	printf("&Value: %i \n", &value);

	int* pValue;

	pValue = &value;

	*pValue = 10;

	printf("The value stored in 'Value' is: %i \n", value);

	printf("Value: %i \n", value);
	printf("pValue: %i \n", pValue);
	printf("&Value: %i \n", &value);
	printf("&pValue: %i \n", &pValue);
	printf("*Value: doesn't exist \n");
	printf("*pValue: %i \n", *pValue);
	
	return 0;
}