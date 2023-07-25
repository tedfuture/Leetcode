class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next)
            return false;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow!=fast){
            slow = slow->next;
            if(fast && fast->next)
                fast = fast->next->next;
            else
                return false;
        }
        return true;
    }
};
