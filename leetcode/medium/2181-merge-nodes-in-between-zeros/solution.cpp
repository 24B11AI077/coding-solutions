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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode* res = new ListNode();
        ListNode* curr = res;
        ListNode* temp = head;
        while(temp!=nullptr){
            if(temp->val == 0){
                if(sum > 0){
                    ListNode* node = new ListNode();
                    node->val = sum;
                    curr->next = node;
                    curr = curr->next;
                    sum = 0;
                }
            }
            sum += temp->val;
            temp = temp->next;
        }
        if(sum > 0){
            ListNode* node;
            node->val = sum;
            curr->next = node;
        }
        return res->next;
    }
};