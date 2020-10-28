#pragma once


//ADDITION
float add(float valueA, float valueB) {
	return valueA + valueB;
}

//SUBSTRACTION
float subs(float valueA, float valueB) {
	return valueA - valueB;
}

//MULTIPLICATION
float mult(float valueA, float valueB) {
	return valueA * valueB;
}

//DIVISION
float div(float valueA, float valueB) {
	if (valueB != 0) {
		return valueA / valueB;
	}
	else {
		printf("\nError: Division by 0 doesn't exist\n");
		return 0;
	}
}