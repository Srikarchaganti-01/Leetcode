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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int len = 1;
        if(head == nullptr|| head->next == nullptr) return head;
        while(temp->next!=nullptr){
            temp = temp->next;
            len++;
        }
        int n = k%len;
        if(n == 0) return head;
        temp->next = head;
        int ror = len - n;
        while(ror>0){
            temp = temp->next;
            ror--;
        }
        ListNode* newhead = temp->next;
        temp->next = nullptr;
        return newhead;
    }
};