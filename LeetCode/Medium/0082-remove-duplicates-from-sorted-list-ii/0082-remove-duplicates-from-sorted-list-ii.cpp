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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        queue<int>q;
        map<int,int>mp;
        while(temp!= nullptr){
            mp[temp->val]++;
            temp = temp->next;
        }
        for(auto it:mp){
            if(it.second == 1) q.push(it.first);
        }
        ListNode* newnode = new ListNode(0);
        temp = newnode;
        while(!q.empty()){
            temp->next = new ListNode(q.front());
            temp = temp->next;
            q.pop();
        }
        return newnode->next;
    }
};