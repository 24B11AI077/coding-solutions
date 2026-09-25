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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* prev = nullptr;
        ListNode* left = head;
        ListNode* right = head->next;
        ListNode* res = right;
        ListNode* nn = right->next;
        while(left && right){
           right->next = left;
           left->next = nullptr;
           if(prev)
           prev->next = right;
           prev= left;
           if(nn){
            left = nn;
            right = left->next;
            if(right) nn = right->next;
            else {
                prev->next = left;
                return res;
            }
           }
           else break;
        }
        return res;
    }
};      
//  2 1 3 4 