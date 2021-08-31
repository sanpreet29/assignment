/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseBetween(struct ListNode* head, int left, int right){
    
    struct ListNode *a, *b;
    a = b = head;
    
    while(left < right)
    {
        int x = 1, y = 1;
        while(x < left)
        {
            a = a -> next;
            x++;
        }
        while(y < right)
        {
            b = b -> next;
            y++;
        }
        int temp = a -> val;
        a -> val = b -> val;
        b -> val = temp;
        
        left++;
        right--;
        
        a = head;
        b = head;
    }
    
    return head;

}