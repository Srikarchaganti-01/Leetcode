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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* temp = new ListNode(0);
        ListNode* res = temp;
        int carry = 0;
        while(temp1!=nullptr || temp2!=nullptr || carry){
            int data =carry;
            if(temp1!=nullptr){
                data = data + temp1->val;
                temp1 = temp1->next;
            }
            if(temp2!=nullptr){
                data = data + temp2->val;
                temp2 = temp2->next;
            }
            carry = data/10;
            data = data % 10;
            res->next = new ListNode(data);
            res = res->next;
        }
        return temp->next;
    }
};