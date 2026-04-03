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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int pos = 0;
        while(temp!=nullptr){
            pos++;
            temp = temp->next;
        }
        int curr = 0;
        int lim = ceil(pos/2);
        temp = head;
        while(temp!=nullptr){
            if(curr < lim) {
                curr++;
                temp = temp->next;
                cout<<curr<<" ";
                continue;
            }
            return temp;
        }
        return head;
    }
};