/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode* head)
{
    struct ListNode *prevnode, *nextnode, *currnode;
    prevnode = NULL;
    nextnode = currnode = head;
    while(nextnode != NULL)
    {
        nextnode = nextnode -> next;
        currnode -> next = prevnode;
        prevnode = currnode;
        currnode = nextnode;
    }
    return prevnode;
}

bool isPalindrome(struct ListNode* head){

    struct ListNode *a , *b;
    a = b = head;
    
    while(b -> next != NULL && b -> next -> next != NULL)
    {
        a = a -> next;
        b = b -> next -> next;
    }
    struct ListNode* newhead = reverse(a -> next);
    a -> next = NULL;
    
    struct ListNode* dummy = head;
    struct ListNode* newdummy = newhead;
    while(dummy && newdummy)
    {
        if(dummy -> val != newdummy -> val)
        {
            return false;
        }
        dummy = dummy -> next;
        newdummy = newdummy -> next;
    }
    return true;
}