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
    ListNode* swapPairs(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        ListNode* newnode =new ListNode(0);
        temp = newnode;
        for(int i=1;i<n+2;i++){
            if(i%2 != 0 && i<n ){
                temp->next = new ListNode(v[i]);
                temp = temp->next;
            }
            else if(i % 2 == 0 && (i - 2) >= 0 && (i - 2) < n){
                temp->next = new ListNode(v[i-2]);
                temp = temp->next;
            }
        }
        return newnode->next;
    }
};