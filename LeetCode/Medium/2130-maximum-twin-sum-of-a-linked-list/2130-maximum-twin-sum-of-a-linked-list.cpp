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

    int pairSum(ListNode* head) {
        vector<int>v;
        stack<int>st;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            st.push(temp->val);
            temp = temp->next;
        }
        int ans = INT_MIN;
        for(int i=0;i<v.size();i++){
            int tot = v[i] + st.top();
            st.pop();
            ans = max(ans,tot);
        }
        return ans;
    }
};