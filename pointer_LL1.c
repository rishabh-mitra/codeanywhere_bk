#include <stdio.h>
#include <stdlib.h>

typedef struct utl{
  char name[100];
  int psno;
  char loc[100];
}UTL;

int main(void){
  UTL *a = NULL;
  UTL *b = NULL;
  UTL *c = NULL;
  
  a = (UTL*)malloc(sizeof(UTL*));
  printf("Enter name, PS and Location\n");
  fgets(a->name,100,stdin);
  scanf("%d\n",&a->psno);
  fgets(a->loc,100,stdin);
  
  printf("\n%s \n",a->name);
  printf("%d \n",a->psno);
  printf("%s \n",a->loc);
}