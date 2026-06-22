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
    void reorderList(ListNode* head) {
        vector<int> temp;
        ListNode* curr = head;
        while(curr != NULL){
            temp.push_back(curr->val);
            curr = curr->next;
        }
        int n = temp.size();
        int i = 0, j = n-1;
        vector<int> temp2;
        while(j>i){
            temp2.push_back(temp[i]);
            i++;
            temp2.push_back(temp[j]);
            j--;
        }
        if(i==j){
            temp2.push_back(temp[i]);
        }
        curr = head;
        for(int i=0;i<n;i++){
            curr->val = temp2[i];
            curr = curr->next;
        }
    }
};
