

struct node{

    int val;
    struct node *next;
    struct node *prev;

};


struct node* AddBeforeVal(struct node* head, int val, int valSearch) {

        // Check if the list is empty
             if (head == NULL) {
                printf("List is empty\n");
                return head;
              }

      // If the value to be inserted before is at the head node
      
    if (head->val == valSearch) {
        struct node* NewOne = NewNode(val);
        NewOne->next = head;
        head->prev = NewOne;
        return NewOne;  // New node becomes the new head
    }

    // Traverse the list to find the valSearch node
    
    struct node* temp = head;
    while (temp != NULL) {
        if (temp->val == valSearch) {
            struct node* NewOne = NewNode(val);
            struct node* PREV = temp->prev;

            // Link the new node before temp
            NewOne->next = temp;
            NewOne->prev = PREV;
            PREV->next = NewOne;     // Update previous node to point to NewOne
            temp->prev = NewOne;     // Update temp node's prev pointer to NewOne

            return head;  // Return head as it hasn't changed
        }
        temp = temp->next;
    }

    // If value was not found
    printf("Value %d not found in the list\n", valSearch);
    return head;  // Return the original head
}