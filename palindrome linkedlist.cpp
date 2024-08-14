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
    bool isPalindrome(ListNode* head) {
        vector<int>arr;

        ListNode *temp=head;

        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        
        int j = arr.size()-1;

        for(int i = 0;i<arr.size();i++){
            if(arr[i]!=arr[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};
