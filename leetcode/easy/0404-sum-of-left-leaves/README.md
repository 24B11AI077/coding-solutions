# Sum of Left Leaves

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `root` of a binary tree, return  *the sum of all left leaves.* 

A  **leaf**  is a node with no children. A  **left leaf**  is a leaf that is the left child of another node.

 

 **Example 1:** 

```
Input: root = [3,9,20,null,null,15,7]
Output: 24
Explanation: There are two left leaves in the binary tree, with values 9 and 15 respectively.

```

 **Example 2:** 

```
Input: root = [1]
Output: 0

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [1, 1000].
- -1000 <= Node.val <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16.2 MB (beats 24.27%)  
**Submitted:** 2026-08-01T04:29:54.929Z  

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        int cnt = 0;
        while(!que.empty()){
            
            int size = que.size();
            for(int i = 0; i < size; i++){
                TreeNode* node = que.front();
                    que.pop();
            if(node->left && !node->left->left && !node->left->right) cnt+=node->left->val;
            if(node->left) que.push(node->left);
            if(node->right) que.push(node->right);
            }
            
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sum-of-left-leaves/)