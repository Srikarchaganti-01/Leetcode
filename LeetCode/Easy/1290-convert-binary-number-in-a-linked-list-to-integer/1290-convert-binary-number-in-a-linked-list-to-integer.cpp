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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int mul = 0;
        stack<int>st;
        while(temp!=nullptr){
            st.push(temp->val);
            temp = temp->next;
        }
        int res = 0;
        while(!st.empty()){
            int num = st.top();
            if(num == 1) res = res + pow(2,mul)*num;
            mul++;
            st.pop();
        }
        return res;
    }
};