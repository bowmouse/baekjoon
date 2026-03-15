#include<stdio.h>

int main(void) {
	int n;
	printf("원하는 칸 수");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf("%d ", j);

		}
		printf("\n");
	}
	return 0;
}