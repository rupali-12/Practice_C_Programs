// Q8-> C program to print star pattern . The numbr of lines in the pattern should be equal to the value entered by the user. tHe pattern looks like this for n =4 wher n is number of lines...
// *
// **
// ***
// ****

#include<stdio.h>
 
int main(){
      int n;
      printf("Enter the value of n\n");
      scanf("%d", &n);
      for (int i = 0; i < n; i++)
      {  
          for(int j=0; j<=i;j++){
          printf("*");
          }
          printf("\n");
      }
    //   for printing in reverse 
    //   for (int i = n-1; i >=0; i--)
    //   {  
    //       for(int j=0; j<=i;j++){
    //       printf("*");
    //       }
    //       printf("\n");
    //   }
      
    return 0;
}