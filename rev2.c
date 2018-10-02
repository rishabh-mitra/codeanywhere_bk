#include <stdio.h>
#include <math.h>
int len(int x){
 int n=0,c;
 while (x>0){
  c = c%10;
  ++n;
  x = x/10;
  }
 return n/2;
}



int main(){
 int n,n_pow,n_sq,n_len,n_half,n_half_1,n_half_2,i,div,j;
// printf("Enter a number:\n");
 //scanf("%d",&n);
 for(j=1;j<=60000;j++){
 if (j % 10 == 0)
  continue;
 else{
 n_pow = j*j;
 n_len = len(n_pow);
 div = 1;
// printf("%d \n",n_len);
 for(i=0;i<n_len;i++)
  div = div * 10;
// printf("%d \n",div);
  n_half_2 = n_pow % div;
// printf("%d \n",n_half_2);
  n_half_1 = n_pow / div;
// printf("%d \n",n_half_1);
  n_half = n_half_1 + n_half_2;
// printf("%d \n",n_half);
 
// printf("%d \n",n_sq);
  if (n_half == j)
   printf("Magic Number = %d \n",j);
}}
 return 0;
}

