//DATA
/*
	Author: Luis Márquez
	Date: 2020/10/16
	Description:
		Write a program that:
			1) Request a number between 1 and 5 on the keyboard.
			2) Say if the number entered is prime or not.
			3) If the number entered is not in range, announce to the user that they entered a number out of range.
*/

//LIBRARIES
#include <stdio.h>
#include <stdlib.h>

//FUNCTIONS
	void welcome() {
		printf("Program to know if a number is prime or not.\n");
	}

	int capture() {
		int n;
		printf("Write a number between 1 & 5: ");
		scanf_s("%d", &n);
		return n;
	}

	bool verify(int n) {
		if (n > 5 || n < 1) {
			return false;
		}
		else {
			return true;
		}
	}

	void prime_verify(bool prime) {
		if (prime == true) {
			printf("The entered number is prime.\n");
		}
		else {
			printf("The entered number is not prime.\n");
		}
	}

	bool is_prime(int n) {
		if (n != 1 && n != 4) {
			return true;
		}
		else {
			return false;
		}
	}

	void outOR() {
		printf("The entered number is out of range. Try again\n");
	}

//MAIN FUNCTION
	int main() {
		int n;
		welcome();
		n = capture();
		if (verify(n)) {
			prime_verify(is_prime(n));
		}
		else {
			outOR();
		}

		return 0;
	}