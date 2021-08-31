/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* rotateRight(struct ListNode* head, int n){
    
    struct ListNode* tail = head;
    int count = 1;
    if(!head)
    {
        return head;
    }
    while(tail -> next)
    {
        count++;
        tail = tail -> next;
    }
    
    n = n % count;
    if(n == 0)
    {
        return head;
    }
    else
    {
        struct ListNode* ntail = tail;
        struct ListNode* nhead;
        tail -> next = head;
        int steps = count - n;
        while(steps)
        {
            ntail = ntail -> next;
            steps--;
        }
        nhead = ntail -> next;
        ntail -> next = NULL;
        
        return nhead;
    }
    
}