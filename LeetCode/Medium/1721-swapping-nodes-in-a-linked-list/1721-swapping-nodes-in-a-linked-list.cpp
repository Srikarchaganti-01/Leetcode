/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int n = 1;
        if(head == nullptr || head->next == nullptr) return head;
        int right = INT_MAX;
        int left=INT_MAX;
        while(temp->next != nullptr){
            temp = temp->next;
            n++;
        }
        int mini = min(k,n-k+1);
        int m = max(k,n-k+1);
        int pos = 1;
        temp = head;
        while(temp!=nullptr && pos <= m){
            if(pos == mini) right = temp->val;
            if(pos == m) left = temp->val;
            temp =  temp->next;
            pos++;
        }
        pos = 1;
        temp = head;
        while(temp!=nullptr && pos<=m){
            if(pos == mini) temp->val = left;
            if(pos == m) temp->val = right;
            pos++;
            temp = temp->next;
        }
        return head;
    }
};