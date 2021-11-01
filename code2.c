// Q2->C program to find the sum of first n natural number in O(1)
#include<stdio.h>
 
int main(){
    int n;
    printf("Enter the last natural number you want to sum of \n");
    scanf("%d",&n);
    int sum=0;
    // sum 1+2+3.....+n
    for(int i=1; i<=n; i++){
      sum+=i;
    }
    printf("Sum of first %d natural numbers are %d", n,sum);
    return 0;
}