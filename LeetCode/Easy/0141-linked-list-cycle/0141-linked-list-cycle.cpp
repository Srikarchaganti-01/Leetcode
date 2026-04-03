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
        int pos = 0;
        ListNode* temp = head;
        if(head == nullptr) return false;
        while(temp->next != nullptr){
            if(temp->val == impostor){
                cout<<pos;
                return true;
            }
            temp->val = impostor;
            temp = temp->next;
            pos++;
        }
        return false;
    }
};