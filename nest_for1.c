#include <stdio.h>
int main(){
 int i,j,t,c;
 for(i=1;i<=4;i++){
  for(j=1;j<=i;j++)
   printf("* ");
  printf("\n");
 }
 printf("\n\n");

 for(i=1;i<=4;i++){
  for(j=1;j<=4;j++){
   if ((i+j) >= 5)
    printf("* ");
   else
    printf("  ");
    }
   printf("\n");
 }
 printf("\n\n");
 
 for(i=0;i<5;i++){
 c=0;
  for(j=0;j<7;j++){
   t=i+j;
   if(t==3 || t==5 || t==7 || t==9){
    if (c<=i){
     printf("*");
     c++;
     }
    else
   printf(" ");
   }
   else
    printf(" ");
  }
  printf("\n");
 }
 for(i=2;i>=1;i--){
  c=0;
  for(j=0;j<7;j++){
   t=i+j;
  if (t==3 || t==5){
   if (c<=i){ 
   printf("*");
  c++;}
  else
  printf(" ");
  }
 }
 printf("\n");
 }
 printf("\n");
 return 0;
}

