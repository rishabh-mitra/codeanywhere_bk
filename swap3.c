#include <stdio.h>
#include <math.h>

int main(void){
 int a,b;
 printf("Enter two numbers A and B \n");
 scanf("%d%d",&a,&b);
 printf("A and B before swapping %d %d \n",a,b);
 a=a^b;
 b=a^b;
 a=a^b;
 printf("A and B after swapping %d %d \n",a,b);
 return 0;
}

