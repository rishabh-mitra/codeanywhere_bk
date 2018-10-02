#include <stdio.h>
int add(int a,int b){
 if (!a)
  return b;
 else
  return add((a&b)<<1,a^b);
}

int main(void){
 int a,b;
 printf("Enter 2 numbers \n");
 scanf("%d%d",&a,&b);
 printf("Sum of %d and %d is %d \n",a,b,add(a,b));
 return 0;
}

