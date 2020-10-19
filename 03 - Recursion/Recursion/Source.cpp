#include <stdlib.h>
#include <stdio.h>

int factorial(int n) {
	if (n > 1) {
		n *= factorial(n - 1);
	}
	else {
		return n;
	}
}

int main() {

	int n;

	printf("Write the number you want to calculate the factorial: ");
	scanf_s("%i", &n);
	printf("\n");
	
	int fact = factorial(n);

	printf("The factorial result of %i is: %i \n", n, fact);
	
	return 0;
}