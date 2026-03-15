#include<stdio.h>
int main(void) {
    int n;
    int sum = 0;
    double avg;

    printf("몇 개 입력? ");
    scanf_s("%d", &n);
    printf("n = %d\n", n);  // n이 제대로 들어왔는지 확인

    for (int i = 0; i < n; i++) {
        int num;
        printf("%d번째 숫자: ", i + 1);
        scanf_s("%d", &num);
        printf("num = %d\n", num);  // num이 제대로 들어왔는지 확인
        sum += num;
    }

    avg = (double)sum / n;
    printf("평균: %.2f\n", avg);
    return 0;
}