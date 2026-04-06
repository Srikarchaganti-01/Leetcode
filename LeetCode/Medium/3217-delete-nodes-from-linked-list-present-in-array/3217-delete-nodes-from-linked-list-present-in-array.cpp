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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp = head;
        queue<int>q;
        unordered_set<int> st(nums.begin(), nums.end());
        while(temp!=nullptr){
            if(st.count(temp->val))
            {
                temp = temp->next;
                continue;
            }
            q.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(!q.empty()){
            temp->val = q.front();
            q.pop();
            if(!q.empty())temp = temp->next;
            else temp->next = nullptr;
        }
        temp = nullptr;
        return head;
    }
};