# Swapping Nodes in a Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the `head` of a linked list, and an integer `k`.

Return  *the head of the linked list after  **swapping**  the values of the* `kth`  *node from the beginning and the* `kth`  *node from the end (the list is  **1-indexed**).* 

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]

```

 **Example 2:** 

```
Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]

```

 

 **Constraints:** 

- The number of nodes in the list is n.
- 1 <= k <= n <= 105
- 0 <= Node.val <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 185.1 MB (beats 95.63%)  
**Submitted:** 2026-09-26T05:37:10.031Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/)