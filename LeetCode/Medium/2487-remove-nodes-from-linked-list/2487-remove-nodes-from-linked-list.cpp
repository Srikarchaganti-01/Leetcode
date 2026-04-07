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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = rev(head);
        int preval = INT_MIN;
        stack<int>st;
        while(temp!=nullptr){
            int curval = temp->val;
            if(curval >= preval){
                st.push(curval);
                preval = curval;
                // cout<<curval;
            }
            temp = temp->next;  
        }
        ListNode* newnode = new ListNode(0);
        temp = newnode;
        while(!st.empty()){
            temp->next = new ListNode(st.top());
            temp = temp->next;
            st.pop();
        }
        return newnode->next;
    }
};