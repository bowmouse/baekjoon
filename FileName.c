#include<stdio.h>
int main(void) {
    int n;
    double sum = 0;
    double avg;

    printf("몇 개 입력? ");
    scanf_s("%d", &n);
    

    for (int i = 0; i < n; i++) {
        double num;
        printf("%d번째 숫자: ", i + 1);
        scanf_s("%lf", &num);
        
        sum += num;
    }

    avg = sum / n;
    printf("평균: %lf\n", avg);
    return 0;
}