#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int elements[2][3] = { {1, 2, 3}, {4, 5, 6} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("[%d]", elements[i][j]);
			printf("  ");
		}
		printf("\n\n");
	}

	float matrix[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			float k = (float) 0.52879;
			matrix[i][j] = ((i + j) * 100 / (k + 10 * j + i) / 10*(rand()+1));
		}
	}

	for (int  i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("[%f]", matrix[i][j]);
			printf("  ");
		}
		printf("\n\n");
	}

	return 0;
}