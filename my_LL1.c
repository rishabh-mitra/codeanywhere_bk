#include <stdio.h>
#include <stdlib.h>

typedef struct node{
 int data;
 struct node *next;
}NODE;

void printer(NODE *);
void insert_beg(NODE **, int);
void append(NODE **,int);
//void insert_mid();
//void insert_end();

int main(void){
 NODE *nhead = NULL;
 int i;
  char ch;
 printf("Press any key to visualize \n");
 scanf("%c",&ch);
 append(&nhead,100);
  //insert_beg(&nhead,100);
 printer(nhead);
  insert_beg(&nhead,200);
  //insert_beg(&nhead,100);
 printer(nhead);
  insert_beg(&nhead,300);
  //insert_beg(&nhead,100);
 printer(nhead);
  append(&nhead,400);
  //insert_beg(&nhead,100);
 printer(nhead);
//  for(i=0;i<20;i++){
//   insert_beg(&nhead,i);
//   printer(nhead);
//    scanf("%c",&ch);
//  }
 return 0;
}

void append(NODE **head_ref,int new_data){
 NODE* new_node = (NODE*)malloc(sizeof(NODE));
 NODE *last = *head_ref;
 
 new_node->data = new_data;
 new_node->next = NULL;
 
 if(*head_ref == NULL){
  *head_ref = new_node;
  return;
 }
 while(last->next != NULL){
   last = last->next;
 }
 last->next = new_node;
 return;
}

void insert_beg(NODE **head_ref,int new_data){
 NODE *new_node = (NODE *)malloc(sizeof(NODE));
 new_node->data = new_data;
 new_node->next = *head_ref;
 (*head_ref) = new_node;
 return; 
}

void printer(NODE *prn){
 while(prn->next != NULL){
   printf("->%d",prn->data);
   prn = prn->next;
 }
 printf("\n");
}