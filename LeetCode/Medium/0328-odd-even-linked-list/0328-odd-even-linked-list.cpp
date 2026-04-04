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
    ListNode* oddEvenList(ListNode* head) {
        int pos = 1;
        ListNode* temp = head;
        queue<int>q1;
        queue<int>q2;
        while(temp != nullptr){
            if(pos %2 == 0){
                q1.push(temp->val);
            }
            else{
                q2.push(temp->val);
            }
            pos++;
            temp = temp->next;
        }
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        temp = head;
        while(!q2.empty()){
            temp->val = q2.front();
            q2.pop();
            temp = temp->next;
        }
        return head;
    }
};