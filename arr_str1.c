#include <stdio.h>
#DEFINE SIZE 100

int main(void){
 char str1[100];
 char str2[100];
 char str3[50];
 int i,size;

 printf("enter a strings \n");
 fgets(str1,SIZE,stdin);

 for(i=0;i<SIZE;i++){
  if (str1[i] != '\0')
    ++size;
  else
    break;}

 str1 = str1 + " ";
 ++size;

 for(i=0;i<size;i++){
  if(str1[i] != ' ')
    str3[i] = str1[i];
  else{
    ZZ
