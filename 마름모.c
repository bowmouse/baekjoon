#include<stdio.h>

int main(void) {
	int j;
	scanf_s("%d", &j);
	
		
	
	for (int n = 0; n <= j; n++) {
		for (int b = 0; b <= j - n; b++) {
			printf(" ");
		}
		for (int i = 0; i <= 2 * n; i++) {
			printf("*");
		}
		printf("\n");
	}
	
	for (int n = 0; n <= j; n++) {
		for (int a = -1; a <= n; a++) {
			printf(" ");
		}
		
		for (int i = 1 ; i <= 2 * (j - n) -1; i++) {
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}