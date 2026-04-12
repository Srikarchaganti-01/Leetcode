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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        int n = lists.size();
        for(int i=0;i<n;i++){
            ListNode* temp = lists[i];
            while(temp!=nullptr){
                v.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(v.rbegin(),v.rend());
        ListNode* newnode = new ListNode(0);
        ListNode* temp = newnode;
        while(!v.empty() && temp!= nullptr){
            temp->next = new ListNode(v.back());
            v.pop_back();
            temp = temp->next;
        }
        return newnode->next;
    }
};