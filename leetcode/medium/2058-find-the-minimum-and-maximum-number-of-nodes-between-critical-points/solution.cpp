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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = head;
        vector<int> pos;
        temp = temp->next;
        int point = 1;
        while(temp){
            if(temp->next == nullptr) break;
            if(temp->val > prev->val && temp->val > temp->next->val){
                pos.push_back(point);
            }
            if(temp->val < prev->val && temp->val < temp->next->val){
                pos.push_back(point);
            }
            point++;
            prev = temp;
            temp = temp->next;
        }
        if(pos.size()<=1) return {-1,-1};
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0; i < pos.size()-1  ; i++){
            mini = min(pos[i+1]-pos[i],mini);
        }
        maxi = pos[pos.size()-1]-pos[0];
        return {mini,maxi};
    }
};