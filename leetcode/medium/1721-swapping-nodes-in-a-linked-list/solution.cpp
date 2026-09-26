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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        int size = 0;
        while(curr){
            size++;
            curr = curr->next;
        }
        curr = head;
        int trac = 0;
        ListNode* left = nullptr;
        ListNode* right = nullptr;
        while(curr){
            trac++;
            if(trac == k){
                left = curr;
            }
            if(trac == size-k+1){
                right = curr;
                
            }
            curr = curr->next;
        }
        if(left && right){
            int temp = left->val;
            left->val = right->val;
            right->val = temp;
        }
        return head;
    }
};