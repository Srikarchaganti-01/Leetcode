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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr || (head->next == nullptr && head->val == val)) return nullptr;
        ListNode* temp = head;
        ListNode* newnode = new ListNode(0);
        ListNode* tempi = newnode;
        while(temp!=nullptr){
            if(temp->val != val){
                tempi->next = new ListNode(temp->val);
                tempi = tempi->next;
            }
            temp = temp->next;  
        }
        tempi = newnode->next;
        return (tempi);
    }
};