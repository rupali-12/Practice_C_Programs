// Q10-> C program to print prime numbers in a Given Range....

#include <stdio.h>

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num1, num2;
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    printf("The prime numbers between %d and %d are: ", num1, num2);
    for (int j = num1; j <= num2; j++)
    {
        if (isPrime(j))
        {
            printf("%d ", j);
        }
    }
    return 0;
}