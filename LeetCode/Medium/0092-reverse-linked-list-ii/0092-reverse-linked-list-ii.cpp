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
    ListNode* rev(ListNode* newhead,int left,int right,int ptr){
        ListNode* temp = newhead;
        stack<int>st;
        while(temp!=nullptr && ptr <= right){
            st.push(temp->val);
            temp = temp->next;
            ptr++;
        }
        ListNode* nextnode;
        if(temp == nullptr) nextnode = nullptr;
        if(temp != nullptr) nextnode = temp->next;
        
        temp = newhead;
        while(!st.empty()){
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
        if(nextnode) temp->next = nextnode;
        return newhead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        if(left == right) return head;
        int ptr = 0;
        int leftptr = left;
        int rightptr = right;
        while(temp!=nullptr){
            ptr++; 
            if(ptr == left) {
                temp = rev(temp,left,right,ptr);
                return head;
            }
            temp = temp->next;
        }
        return head;
    }
};