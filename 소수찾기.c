#include<stdio.h>

int main(void) {
	int n;
	int count = 0;
	scanf_s("%d", &n);
	for (int i = 2; i <= n; i++) {
		int isPrime = 1;
		for (int j = 2; j <= i - 1; j++)
			if (i % j == 0) {
				isPrime = 0;
				break;
		}
		if (isPrime)count++;
	}
	printf("%d", count);
	return 0;
}