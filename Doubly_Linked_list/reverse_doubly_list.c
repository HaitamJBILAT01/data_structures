#include <stdio.h>
#include <stdlib.h>

struct node{

    int val;
    struct node *next;
    struct node *prev;

};


struct node* ReverseDoublyList ( struct node* head){


     if ( head == NULL){
         printf("List empty, nothing to reverse");
         return head;
     }


         if ( head ->next == NULL){
           return head;
         }



         struct node *current = head, *PrevNode = NULL, *NextNode = NULL;

              while( current != NULL ){

                      NextNode = current->next;

                   current->next = PrevNode;
                   current->prev = NextNode;
                   NextNode->next = current;


                   PrevNode = current;
                   current = NextNode;

              }

               head = PrevNode;




    return head;

}
