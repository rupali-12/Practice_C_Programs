// Q5 -> C program to convert decimal into binary >>
#include<stdio.h>
 
int main(){
    int n;
    printf("Enter the number which you want to convert\n");
    scanf("%d", &n);
    int rem;
    int arr[10], i=0;
    while(n){
         rem= n%2;
         n = n/2;
         arr[i]= rem;
         i++;
    }
    for (int j = i-1; j>=0; j--)
    {
        printf("%d ", arr[j]);
    }
    
    return 0;
}

// 2  8   0
//    4   0
//    2   0
//    1