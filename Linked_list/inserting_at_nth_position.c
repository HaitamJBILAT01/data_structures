/*
  This function allows the user to create a singly linked list by inserting nodes
   at the n'th position

 */


#include <stdio.h>
#include <stdlib.h>

typedef struct node{

  int data;
  struct node* next;
}node;

node* head = NULL ; /* Global variable can be used in any function 
                       We won't need to pass the list in the parametres
                       We can declare it in the main but use    void Insert(node* head, int x, int p)
                     */

void Insert(int x, int p) {

  node* temp = (node*) malloc(sizeof(node)); 
     if (temp == NULL){ 
       printf("Allocation failed");
       exit(1);
       }

   temp->data = x;  // alternative to (*temp).data = x 
   temp->next = NULL; 

         if(p==1){   // it works also if the list is empty because temp->next will take head = NULL

                         temp->next = head;   
                         head = temp;         // the head will point to the new node 
                         return;
                        }
                 
                 else {
             node* temp2 = head;

                       int i;
                           for( i=0; i<p-2; i++ ){
                           temp2 = temp2->next;
                        }
                    temp->next = temp2->next;   
                    temp2->next = temp;
                    }
                    
                }