/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>mp;
        ListNode* temp = head;
        int timer =0;
        if(head == nullptr || head->next == nullptr) return nullptr;
        while(temp != nullptr){
            if(mp.find(temp) != mp.end()) {
                return temp;
            }
            mp[temp] = timer;
            timer++;
            temp = temp->next;
        }
        return nullptr;
    }
};