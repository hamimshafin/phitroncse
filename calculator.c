#include<stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = a *1.0 / b;

    printf("Sum = %d\n", sum);
    printf("Sub = %d\n", sub);
    printf("Mul = %d\n", mul);
    printf("Div = %.1f\n", div);

    return 0;
}