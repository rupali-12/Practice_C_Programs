// Q6-> C program to reverse a number 
#include<stdio.h>
 
int main(){
    int n;
    printf("Enter the number that you want to reverse\n");
    scanf("%d", &n);
    int i=0, reverse=0;
    while(n){
       int digit = (n-(n/10)*10);
       n= n/10;
       reverse = reverse*10 +digit;
    }
    printf("%d", reverse);
    return 0;
}