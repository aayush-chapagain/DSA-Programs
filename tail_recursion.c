#include <stdio.h>

int fact(int n, int accumulator)
{
    if (n == 0)
        return accumulator;
    else
        return fact(n - 1, n * accumulator);
}

int factorial(int n)
{
    return fact(n, 1);
}

int main()
{
    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}