#include <stdio.h>

int main(void){
 int a,b;
 printf("Enter two numbers \n");
 scanf("%d%d",&a,&b);
 printf("A and B before swap = %d %d \n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("A and B after swap = %d %d \n",a,b);
 return 0;
}

