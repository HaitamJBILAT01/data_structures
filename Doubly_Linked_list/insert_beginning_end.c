

struct node{

    int val;
    struct node *next;
    struct node *prev;

};


struct node* NewNode(int v){

     struct node* NewOne = (struct node*) malloc(sizeof(struct node));

            NewOne->val = v;
            NewOne->next = NULL ;
            NewOne->prev = NULL;

        return NewOne;
}

struct node* AddNode(struct node* head, int v){


    struct node* NewOne = NewNode(v);

       if(head != NULL){             // Add at beginning

       NewOne->next = head;
       head->prev = NewOne;

       }
       return NewOne;               

    /*
       struct node* temp = head;     // Add at the end

            if(temp == NULL)
                return NewOne;

           while(temp->next != NULL){

            temp = temp->next;
       }

       NewOne->prev = temp;
       temp->next = NewOne;
       return head;                  

       */


}