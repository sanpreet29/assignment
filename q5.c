/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* create(struct ListNode* head, int x)
{
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp -> val = x;
    temp -> next = NULL;
    return temp;
}


struct ListNode* deleteDuplicates(struct ListNode* head){

        int temp = 1;
        struct ListNode* dummy = create(dummy, 1);
        dummy -> next = head;
       struct ListNode* prev = dummy;
    while(head != NULL)
    {
        if(head -> next != NULL && head -> val == head -> next -> val)
        {
            while(head -> next != NULL && head -> val == head -> next -> val)
            {
                head = head -> next;
            }
            prev -> next = head -> next; 
        }
       else
        {
            prev = prev -> next;       
        }
        head = head -> next;
    }
    return dummy -> next;
}