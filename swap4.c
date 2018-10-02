#include <stdio.h>
#include <math.h>

int main(void){
 int a ,b;
 printf("Enter 2 numbers \n");
 scanf("%d%d",&a,&b);
 printf("A and B before swapping %d %d \n",a,b);
 a^=b^=a^=b;
 printf("A and B after swapping %d %d \n",a,b);
 return 0;
}

