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
    int pairSum(ListNode* head) {
      
        ListNode *curr=head;
vector<int> arr;
       while(curr){
            
            arr.push_back(curr->val);
            curr=curr->next;
        }

        int sum=0;
        int maxsum=0;
    int n=arr.size();
        for(int i=0;i<n-1;i++){
            sum=arr[i]+arr[n-1-i];
            maxsum=max(maxsum,sum);

        }
        return maxsum;

    }
};