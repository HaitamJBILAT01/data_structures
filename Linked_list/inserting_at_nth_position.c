/*
  This program allows the user to create a singly linked list by inserting nodes
   at the n'th position, prints the list, and cleans up memory
   at the end.
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct node{

  int data;
  struct node* next;
}node;

node* head = NULL ; // global variable can be used in any function
 
int GetUserInput() {    //  function to get the user input, it returns an integer
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    return x;
}

int GetUserInputPosition() {    //  function to get the position of the new node
    int x;
    printf("Enter the position\n");
    scanf("%d", &x);
    return x;
}


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







void Print(){

  node* temp = head;              // a fonction that prints the elements of a list 

           printf("List is:  ");
      while(temp != NULL){

           printf("%d ",temp->data);
           temp = temp->next;
        }
      printf("\n");
}

void FreeList() {
    node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}


int main() {
   
   Insert(GetUserInput(),GetUserInputPosition());
   Insert(GetUserInput(),GetUserInputPosition());
   Insert(GetUserInput(),GetUserInputPosition());
   Insert(GetUserInput(),GetUserInputPosition());
   
   Print(); 
   FreeList();

    return 0;
}
