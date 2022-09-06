#include<stdio.h>

int main(void) {

	int a, b, c;
	int num; 
	printf("숫자:");
	scanf_s("%d", &num);

	for (a = 0; a < num; a++) {
		for (b = a; b < num; b++) { 
			printf("*");
		}
		for (c = 0; c < (2 * a) / 2; c++) {
			printf(" ");
		}

		for (c = 0; c < (2 * a) / 2; c++) {
			printf(" ");
		}
		for (b = a; b < num; b++) {
			printf("*");
		}
		printf("\n");

	}

	for (a = 0; a < num; a++) {
		for (b = 0; b <= (2 * a) / 2; b++) { 
			printf("*");
		}
		for (c = a; c < num - 1; c++) {
			printf(" ");
		}

		for (c = a; c < num - 1; c++) {
			printf(" ");
		}
		for (b = 0; b <= (2 * a) / 2; b++) {
			printf("*");
		}

		printf("\n");

	}

	printf("한글");
	return 0;
}