// Q7-> C program  to printf the factorial of a number 
#include<stdio.h>
 
int main(){
    int n;
    printf("Enter the number whose factorial you want\n");
    scanf("%d",&n);
    int fact=1;
    for (int i =1; i <= n; i++)
    {
       fact = fact * i;
    }
    printf("Factorial of defined number is %d ", fact);
    return 0;
}