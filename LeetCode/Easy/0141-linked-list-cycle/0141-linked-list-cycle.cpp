/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int impostor = INT_MIN;
        ListNode* temp = head;
        if(head == nullptr) return false;
        while(temp->next != nullptr){
            if(temp->val == impostor) return true;
            temp->val = impostor;
            temp = temp->next;
        }
        return false;
    }
};