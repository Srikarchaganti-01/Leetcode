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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        queue<int>v;
        int counter =0;
        int count  = 0;
        while(temp!=nullptr){
            if(temp->val == 0){
                if(counter == 0){
                    counter = 1;
                    count = 0;
                }
                else if(counter == 1){
                    v.push(count);
                    counter = 0;
                    continue;
                }
            }
            count = count+temp->val;
            temp = temp->next;
        }
        ListNode* newnode = new ListNode(0);
        temp = newnode;
        while(!v.empty()){
            temp->next = new ListNode(v.front());
            temp = temp->next;
            v.pop();
        }
        return newnode->next;
    }
};