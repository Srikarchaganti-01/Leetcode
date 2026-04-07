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
        ListNode* newnode = new ListNode(0);
        ListNode* temp = rev(head);
        ListNode* tempi = newnode;
        int preval = INT_MIN;
        while(temp!=nullptr){
            int curval = temp->val;
            if(curval >= preval){
                preval = curval;
                tempi->next = new ListNode(curval);
                tempi = tempi->next;

            }
            temp = temp->next;  
        }
        return rev(newnode->next);
    }
};