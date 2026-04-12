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
            int n = 0;
            while(temp != nullptr){
                n++;
                temp = temp->next;
            }
            int leftPos = k;
            int rightPos = n - k + 1;
            ListNode* leftNode = head;
            ListNode* rightNode = head;
            for(int i = 1; i < leftPos; i++) leftNode = leftNode->next;
            for(int i = 1; i < rightPos; i++) rightNode = rightNode->next;
            swap(leftNode->val, rightNode->val);
            return head;
    }
};