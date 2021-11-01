// Q1-> C program to print multiplication table
#include<stdio.h>
 
int main(){
    int n;
    printf("Enter the number whose multiplication table you want\n");
    scanf("%d", &n);
    for(int i=0; i<10; i++){
        printf("%d X %d = %d\n", n, (i+1), n*(i+1));
    }
    return 0;
}