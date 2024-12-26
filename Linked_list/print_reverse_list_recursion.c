

/*  WA3RAAAAAAAAAAA   !!!!!!!!, 3AWD FHEMHA*/


#include <stdio.h>
#include <stdlib.h>

typedef struct node{

  int data;
  struct node* next;
}node;

void ReversePrint(node* p)
{

     if ( p == NULL)
      {
        return;
      }

      ReversePrint(p->next);
      printf("%d",p->data);

}