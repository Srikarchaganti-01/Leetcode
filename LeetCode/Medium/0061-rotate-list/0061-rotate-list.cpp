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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>v;
        ListNode* temp = head;
        if(!head || !head->next || !k) return head;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int n = v.size();
        k = k % n;
        int m = n-k;
        temp =  head;
        for(int i=m;i<n;i++){
            temp->val = v[i];
            temp = temp->next;
        }
        for(int j=0;j<m;j++){
            temp->val = v[j];
            temp = temp->next;
        }
        return head;
    }
};