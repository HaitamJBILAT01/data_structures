/*
  This function allows the user to delete a node in a singly linked list by typing the node's position
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



   void ReverseRecusrion(node* temp){    //  temp is a variable taking the address of the first node in the main func

       if(temp->next == NULL){    // traverse the list until the end ::  exit condition
           
           head = temp;            // head take the adress of the last node
           return;
       }
 
          ReverseRecusrion(temp->next);

             node* q = temp->next;   // adjust the links 
               q->next = temp;
               temp->next = NULL;
   }