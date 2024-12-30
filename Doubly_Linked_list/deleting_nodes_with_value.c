#include <stdio.h>
#include <stdlib.h>

struct node{

    int val;
    struct node *next;
    struct node *prev;

};




struct node* DeleteNode ( struct node* head, int val){


      if (head == NULL){
        printf("The list is empty");
        return head;
      }

      
      
      
         while( head != NULL  &&   head->val == val){   
            
            struct node* temp = head;
            head = head->next;
              if ( head != NULL ){             
              
                   head->prev = NULL;
                 }
            free(temp);
         }
             
             
               struct node* temp = head;
               
                   while(temp!=NULL){
                       
                       if(temp->val == val){
                          
                          temp->prev->next = temp->next;
                           if(temp->next != NULL){
                               temp ->next->prev = temp->prev;
                           }
                         struct node* freenode = temp;
                           temp = temp->next;
                            free(freenode);
                        
                       }
                       else{
                          temp = temp->next;
                       }
                   
                   
                   }       
               
        
        return head;
         

}