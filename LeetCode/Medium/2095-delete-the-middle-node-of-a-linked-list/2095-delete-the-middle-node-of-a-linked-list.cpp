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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head==nullptr || head->next==nullptr)return nullptr;
        while(fast!= nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* temp = head;
        while(temp!=nullptr && temp->next!=nullptr){
            if(temp->next == slow){
                temp->next = temp->next->next;
            }else temp = temp->next;
        }
        return head;
    }
};