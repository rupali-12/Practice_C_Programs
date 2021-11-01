// Q9-> C program to reverse a string 
// 1st method is by using strrev() function

// 2nd method >>>>>
#include<stdio.h>
#include<string.h>
 
int main(){
    int n=0;
    char S[10];
    printf("Enter the string you want to reverse: \n");
    scanf("%s",&S);
    printf("String before reversing: %s\n", S);
    while (S[n]!= '\0')
    {
        n++;
    }
    printf("Length of string is %d \n", n);
    for(int i=0; i<=(n/2-1); i++){
        char temp = S[i];
        S[i] = S[n-i-1];
        S[n-i-1]= temp;
    }
    printf("String after reversing: %s\n", S);

    return 0;
}