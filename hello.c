#include<stdio.h>

int main()
{
    int a, b;
    char c;
    float d;
    scanf("%d%d %c %f", &a,&b,&c,&d);
    printf("Hello World\n");
    printf("number: %d %d %c %0.1f", a,b,c,d);

    return 0;
}