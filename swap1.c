#include <stdio.h>
int main(){
 int a,b,c;
 printf("Enter the two values for swapping \n");
 scanf("%d%d",&a,&b);
 printf("The values a and b before swapping are %d %d \n",a,b);
 c=a;
 a=b;
 b=c;
 printf("The values a and b after swapping are %d %d \n",a,b);
 return 0;
}

