#include <stdio.h>
#include "node.h"

int main(){

  int c=5;
  struct node a,b,*head ;
  a.value = c;
  a.next= &b;
  head=&a; 
  b.value=head->value+3;

  printf("a=%d\n",head->value);
  printf("b=%d\n",head->next->value);
  

  struct node d;
  d.value=7;
 
  a.next->next=&d;
  printf("d=%d\n",head->next->next->value);
  
  int i;
  struct node *temp = head;
  
   for(i=0;i<3;i++){
     printf("now i is %d\n",i);
     printf("temp = %d\n",temp -> value);
     temp = temp -> next;
   }
   

}