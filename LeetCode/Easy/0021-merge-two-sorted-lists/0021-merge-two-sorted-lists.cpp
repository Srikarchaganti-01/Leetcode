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
        ListNode* newnode = new ListNode(0);
        ListNode* temp = newnode;
        while(list1 != nullptr || list2!=nullptr){
            if(list1 != nullptr && list2 != nullptr){
                if(list1->val <= list2->val){
                    temp->next = list1;
                    list1 = list1->next;
                }
                else if(list2->val < list1->val){
                    temp->next = list2;
                    list2 = list2->next;
                }
                temp = temp->next;
            }
            if(list1 != nullptr && list2 == nullptr){
                temp->next = list1;
                break;
            }
            if(list1 == nullptr && list2 != nullptr){
                temp->next = list2;
                break;
            }
        }
        return newnode->next;
    }
};