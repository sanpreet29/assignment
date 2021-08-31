/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    struct ListNode* temp;
    struct ListNode* head = NULL;
    if(l1 == NULL)
    {
        return l2;
    }
    if(l2 == NULL)
    {
        return l1;
    }
    if(l1 -> val <= l2 -> val)
    {
        temp = l1;
        l1 = temp -> next;
    }
    else
    {
        temp = l2;
        l2 = temp -> next;
    }
    head = temp;
    while(l1 && l2)
    {
        if(l1 -> val <= l2 -> val)
        {
            temp -> next = l1;
            temp = l1;
            l1 = temp -> next;
        }
        else
        {
            temp -> next = l2;
            temp = l2;
            l2 = temp -> next;
        }
    }
    if(l1 == NULL)
    {
        temp -> next = l2;
    }
    if(l2 == NULL)
    {
        temp -> next = l1;
    }
    return head;
}