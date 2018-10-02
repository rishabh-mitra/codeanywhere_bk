#include <stdio.h>

int main(void){
 int n,n_rev,x;
 printf("Enter a number\n");
 scanf("%d",&n);
 while(n>0){
  x = n%10;
  n_rev = (n_rev*10) + x;
  n = n/10;
 }
 printf("The reverse number is : %d \n", n_rev);
 return 0;
} 
