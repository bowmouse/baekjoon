#include<stdio.h>
#include<math.h>
int main(void) {
	float num_1;
	float num_2;
	float sum;
	float min;
	float mul;
	float div;
	printf("intput two numbers\n");
	scanf_s("%f %f", &num_1, &num_2);
	sum = num_1 + num_2;
	min = num_1 - num_2;
	mul = num_1 * num_2;
	div = num_1 / num_2;
	if (fmod(num_1, 1.0) == 0) {
		if (fmod(num_2, 1.0) == 0) {
			printf("%.0f + %.0f = %.0f\n", num_1, num_2, sum);
			printf("%.0f - %.0f = %.0f\n", num_1, num_2, min);
			printf("%.0f * %.0f = %.0f\n", num_1, num_2, mul);
			printf("%.0f / %.0f = %f\n", num_1, num_2, div);
		}
	}
	else {
		printf("%f + %f = %f\n", num_1, num_2, sum);
		printf("%f - %f = %f\n", num_1, num_2, min);
		printf("%f * %f = %f\n", num_1, num_2, mul);
		printf("%f / %f = %f\n", num_1, num_2, div);
	}
			

	
	return 0;
}