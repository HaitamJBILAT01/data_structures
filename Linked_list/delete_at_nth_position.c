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
                       We can delcare it in the main but use    void Insert(node* head, int x, int p)
                     */


        void DeleteNode(int p){  // p variable for the position 

            if ( head == NULL){
                printf("The list is empty");
                return;
            }


                   node* temp = head;

                  if ( p == 1 ){   // if the user choosed to delete the first node

                    
                      head = temp->next;
                      free(temp);
                      return;     // either return or else{} after the if statement , 

                  }

                  int i;
                  
                for(i=0; i<p-2; i++){  
                      temp = temp->next;    // node at p-1 position
                    }

                    node* temp2 = temp->next ; // node at p position
                          
                          temp->next = temp2->next;  // adjust the link to ignore the node at p position
                          free(temp2);  // free the node at the p position ( Delete it )
        }


