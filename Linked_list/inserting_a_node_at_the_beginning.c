/*
  This program allows the user to create a singly linked list by inserting nodes
   at the beginning, prints the list after each insertion, and cleans up memory
   at the end.
 */


#include <stdio.h>
#include <stdlib.h>

typedef struct node{

  int data;
  struct node* next;
}node;

 node* head = NULL; // global variable, can be accessed anywhere , initialised with NULL

int GetUserInput() {    //  function to get the user input, it returns an integer
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    return x;
}


void Insert(int x) {

  node* temp = (node*) malloc(sizeof(node));
     if (temp == NULL){ 
       printf("Allocation failed");
       exit(1);
       }

   temp->data = x;  // alternative to (*temp).data = x 
   temp->next = NULL; 

         if(head == NULL){         // if the list is empty add the new created node 
           head = temp;
            }
           
           else {
                     temp->next = head;     // set the new node's next pointer to the previous first node
                     head = temp;           // set head to point to the new node 
                 
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

   
    int n, i;
    
     do{
      printf("How many numbers you want to add?\n");
      scanf("%d",&n); } while(n<=0);
     
         for (i = 0; i < n; i++) {
            
            Insert( GetUserInput() );
            Print();
         }
 
    FreeList();

    return 0;
}
