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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* curr=head;
        ListNode* dummy=new ListNode(0);
        ListNode* prev = dummy;
        
        dummy->next=head;
         unordered_set<int> mp(nums.begin(), nums.end());
        while(curr!=nullptr){
            if(mp.find(curr->val)!=mp.end()){
                
prev->next = curr->next;
            }else{
                prev=curr;

            }
            curr=curr->next;
        }
        return dummy->next;
    }
};