class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0,head);
        ListNode* curr=&dummy;

        while(curr->next != NULL)
        {
            if(curr->next->val == val)
            {
                ListNode* toDelete =curr->next;
                curr->next = toDelete->next;
                delete toDelete;
            }else
            {
                curr= curr->next;
            }
        }
        return dummy.next;
    }
};