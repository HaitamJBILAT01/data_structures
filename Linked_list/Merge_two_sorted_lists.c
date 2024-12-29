/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {


      
     struct ListNode* dummyNode = (struct ListNode*) malloc(sizeof(struct ListNode));

                if(dummyNode == NULL){
                    printf("Allocation Failed");
                    exit(1);
                }
               
               dummyNode->val = -1;
               dummyNode->next = NULL;


               struct ListNode *current1, *current2, *current3;

                     current1 = list1;
                     current2 = list2;
                     current3 = dummyNode;


                     while(current1 != NULL && current2 != NULL){


                                 if(current1->val <= current2->val){

                                    current3->next = current1;
                                    current1 = current1->next;
                                   
                                 }

                                 else{

                                   current3->next = current2;
                                   current2 = current2->next;
                                   
                                 }
                                 current3 = current3->next;
                        
                     }

                     if(current1 == NULL)
                        current3->next = current2;
                        else if(current2 == NULL)
                         current3->next = current1;

          struct ListNode *NewOne = dummyNode->next;
          free(dummyNode);
          return NewOne;
}