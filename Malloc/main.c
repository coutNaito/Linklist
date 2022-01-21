#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(){

  int c=5,i;
  NODE *head,*temp ;
  head=(NodePtr) malloc(sizeof(NODE));
  temp = head;
  int n=9;

  for(i=0;i<n;i++){
    temp->value = c;
    c+=2;
    if(i==n-1)
      temp->next = NULL;
    else
      temp->next = (NodePtr)malloc(sizeof(NODE));
    printf("Now loop %d\n",i);
    printf("Value = %d\n",temp->value);
    
  /* head=(NodePtr) malloc(sizeof(NODE));
  head->value = c;
  head->next=(NodePtr) malloc(sizeof(NODE));

  head->next->value=head->value+3;

  head->next->next=(NodePtr) malloc(sizeof(NODE));
  head->next->next->value=7;
  head->next->next->next=NULL;*/
  }
  temp->next = NULL;

  printf("a=%d\n",head->value);
  printf("b=%d\n",head->next->value);
  printf("b=%d\n",head->next->next->value);
  
 


  printf("d=%d\n",head->next->next->value);
  //BRAKE ถึง 16:05
 
  temp=head ;
   for(i=0;i<3;i++){
         printf("%3d->",temp->value);
         temp=temp->next;

   }
   printf("NULL\n");
   
  for(temp=head; temp!=NULL ;temp=temp->next){
       printf("%3d->",temp->value);
  }
     printf("NULL\n");
  free()    
}