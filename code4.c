// Q4-> C program to find a prime number
#include <stdio.h>

int main()
{
    int n;
    int isPrime = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime == 1)
    {
        printf("Given number is a prime number\n");
    }
    else
    {
        printf("Given number is not a prime number\n");
    }

    return 0;
}