#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void **rrr;
int main(){
  rrr = malloc(sizeof(void **));
  *rrr = strdup("hhh");
  //rrr = NULL;
  //rrr = strdup("hhh");
  //free(rrr);
  rrr = ((char*)*rrr+1);
  return 0;
}