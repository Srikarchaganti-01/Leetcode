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
    bool searchvector(vector<int>& nums,int target){
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high) / 2;
            if(nums[mid] == target) return true;
            else if(nums[mid] > target) high = mid-1;
            else if(nums[mid] < target) low = mid+1;
        }
        return false;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp = head;
        queue<int>q;
        sort(nums.begin(),nums.end());
        while(temp!=nullptr){
            if(searchvector(nums,temp->val)){
                temp = temp->next;
                continue;
            }
            q.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(!q.empty()){
            temp->val = q.front();
            q.pop();
            if(!q.empty())temp = temp->next;
            else temp->next = nullptr;
        }
        temp = nullptr;
        return head;
    }
};