#include <stdio.h>

int power(int a, int b);

int main()
{
    int a, b;
    printf("Enter the base number: ");
    scanf("%d", &a);
    printf("Enter the exponent: ");
    scanf("%d", &b);

    int result = power(a, b);
    printf("%d raised to the power %d = %d\n", a, b, result);

    return 0;
}

int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}

