#include <stdio.h>
#include <stdlib.h>



struct node{

    int val;
    struct node *next;
    struct node *prev;

};


struct node* MiddleofList(struct node* head){


          if ( head == NULL){
          printf("List is empty\n");
          return NULL;
          }


                  if(head->next == NULL){
                      printf("There is only one element in the list\n");
                      return head;
                  }

                      struct node *fast = head, *slow = head;

                          while( fast != NULL   &&   fast->next != NULL){

                              fast = fast->next->next;
                              slow = slow->next ;

                          }


                return slow;


}
