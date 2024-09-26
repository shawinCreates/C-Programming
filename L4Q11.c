#include <stdio.h>

int sumOfFirstTwenty();

int main()
{
    int sum = sumOfFirstTwenty();
    printf("Sum of the first twenty natural numbers: %d\n", sum);

    return 0;
}

int sumOfFirstTwenty()
{
    int i, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        sum += i;
    }
    return sum;
}

