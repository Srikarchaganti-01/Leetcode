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
    ListNode* rev(ListNode* newhead){
        ListNode* prev = nullptr;
        ListNode* curr = newhead;
        while(curr != nullptr){
            ListNode* nextNode = curr->next; 
            curr->next = prev;              
            prev = curr;                     
            curr = nextNode;               
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        stack<int>st;
        ListNode* temp = head;
        while(temp!=nullptr){
            st.push(temp->val);
            temp = temp->next;
        }
        int carry = 0;
        temp = new ListNode(0);
        ListNode* res = temp;
        while(!st.empty() || carry){
            int num = 0;
            if(!st.empty()){
                num = st.top();
                st.pop();
            }
            int data = (num*2) + carry;
            carry = data/10;
            data = data%10;
            res->next = new ListNode(data);
            res = res->next;
        }
        return rev(temp->next);
    }
};