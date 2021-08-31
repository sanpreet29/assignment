/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* Node(struct ListNode* temp, struct ListNode *head)
{
    struct ListNode* b = head;
    while(temp != b)
    {
        temp = temp -> next;
        b = b -> next;
    }
    return temp;
}


struct ListNode *detectCycle(struct ListNode *head) {
    
    struct ListNode* a = head;
    struct ListNode* b = head;
    
    while(a && b && b -> next)
    {
        a = a -> next;
        b = b -> next -> next;
        
        if(a == b)
        {
            struct ListNode* node = Node(a, head);
            return node;
        }
    }
    return NULL;
}