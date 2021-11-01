// Q1-> C program to find the largest element in an array 
#include<stdio.h>
 
int returnMax(int array[], int n){
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(array[i]>max){
            max = array[i];
        }
    }
    return max;
}
int main(){
    int arr[]= {1, 12, 45, 67, 89,78, 900};
    int max= returnMax(arr,7);
     printf("Maximum element in an array is %d", max);
    return 0;
}