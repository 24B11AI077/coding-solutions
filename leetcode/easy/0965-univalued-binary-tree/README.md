# Univalued Binary Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A binary tree is  **uni-valued**  if every node in the tree has the same value.

Given the `root` of a binary tree, return `true` *if the given tree is  **uni-valued**, or* `false` *otherwise.* 

 

 **Example 1:** 

```
Input: root = [1,1,1,1,1,null,1]
Output: true

```

 **Example 2:** 

```
Input: root = [2,2,2,5,2]
Output: false

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [1, 100].
- 0 <= Node.val < 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.5 MB (beats 68.37%)  
**Submitted:** 2026-07-31T10:41:24.549Z  

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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*> que1;
        que1.push(root);
        int value = root->val;
        while(!que1.empty()){
            TreeNode* node = que1.front();
            que1.pop();
            if(node->val != value) return false;
            if(node->left) que1.push(node->left);
            if(node->right) que1.push(node->right);
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/univalued-binary-tree/)