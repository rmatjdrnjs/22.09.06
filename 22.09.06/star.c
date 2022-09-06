#include<stdio.h>

int main(void) {

	int a, b, c;
	int num; 
	printf("¼ıÀÚ:");
	scanf_s("%d", &num);

	for (a = 0; a < num; a++) {
		for (b = a; b < num; b++) { 
			printf("*");
		}
		for (c = 0; c < a; c++) {
			printf(" ");
		}

		for (c = 0; c < a; c++) {
			printf(" ");
		}
		for (b = a; b < num; b++) {
			printf("*");
		}
		printf("\n");

	}

	for (a = 0; a < num; a++) {
		for (b = 0; b <= a; b++) { 
			printf("*");
		}
		for (c = a; c < num - 1; c++) {
			printf(" ");
		}

		for (c = a; c < num - 1; c++) {
			printf(" ");
		}
		for (b = 0; b <= a; b++) {
			printf("*");
		}

		printf("\n");





	}

	return 0;
}