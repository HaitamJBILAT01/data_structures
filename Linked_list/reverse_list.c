/*
  This function allows the user to reverse a singly linked list 
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


    void Reverse(){

         
         node *current, *nextNode, *prev;
           current = head;
           prev = NULL;

           while(current != NULL){          // Dress the nodes graph to better understand it !!!!!!

                nextNode = current->next;
                current->next = prev;
                prev = current;
                current = nextNode;
           } 
           
                head = prev;

    }