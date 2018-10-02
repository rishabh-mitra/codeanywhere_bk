#include <stdio.h>

int main(){
 char str[100];
 int i;
 printf("Enter names and print \n");
 for(i=0;i<20;i++){
  fgets(str,100,stdin);
  printf("Hello %s \n",str);
 }
 return 0;
}