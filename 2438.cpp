#include <stdio.h>

int main()
{
    int A;
    scanf("%d", &A);
            for (int c = 0; c < A; c++) {
                for (int d = 0; d <= c; d++) {
                    printf("*");

                }
                printf("\n");
            }
    return 0;
}
