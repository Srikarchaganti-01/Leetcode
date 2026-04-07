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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        vector<int>v;
        if(list1 == nullptr && list2 == nullptr) return nullptr;
        while(temp1 != nullptr || temp2 != nullptr){
            if(temp1 != nullptr) {
                int n = temp1->val;
                v.push_back(n);
                temp1 = temp1->next;
            }
            if(temp2 != nullptr){
                int m = temp2->val;
                v.push_back(m);
                temp2 = temp2->next;
            }
        }
        sort(v.rbegin(),v.rend());
        ListNode* newnode = new ListNode(0);
        ListNode* temp = newnode;
        while(!v.empty()){
            temp->next = new ListNode(v.back());
            temp = temp->next;
            v.pop_back();
        }
        return newnode->next;
    }
};