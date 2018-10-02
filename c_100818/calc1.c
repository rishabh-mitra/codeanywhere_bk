#include <stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main(void){
 int res,a,b;
 char ch,ter;
 printf("Enter the first number: ");
 scanf("%d",&a);
 printf("\nEnter the operator 1.+ 2.- 3.* 4./ ");
 scanf("%d",&res);
 printf("\nEnter the second number: ");
 scanf("%d",&b);
 switch(res){
  case 1 : printf("\nThe + of %d and %d is %d\n",a,b,add(a,b));
             break;
  case 2 : printf("\nThe - of %d and %d is %d\n",a,b,sub(a,b));
             break;
  case 3 : printf("\nThe * of %d and %d is %d\n",a,b,mul(a,b));
             break;
  case 4 : if (b != 0)
               printf("\nThe / of %d and %d is %d\n",a,b,div(a,b));
             else
               printf("\n divisor cannot be zero\n");
             break;
  default : printf("\nTry again\n");}
 return 0;
}

int add(int a,int b){return (a+b);}

int sub(int a,int b){return (a-b);}

int mul(int a,int b){return (a*b);}

int div(int a,int b){return (a/b);}

