# Check Level Anagrams in Binary Trees

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the roots of two binary trees   root1   and   root2 , check whether the nodes at every corresponding level of the two trees are anagrams of each other.

Two levels are considered anagrams if they contain the same node values with the same frequencies, regardless of their order.

 **Examples:** 

```
Input: root1 = [1, 3, 2, N, N, 5, 4], root2 = [1, 2, 3, 4, 5, N, N]

Output: true
Explanation: 
Level 0: [1] and [1]
Level 1: [3, 2] and [2, 3]
Level 2: [5, 4] and [4, 5]
The node values at every corresponding level are anagrams of each other. Hence, the answer is true.
```

```
Input: root1 = [1, 2, 3, 5, 4], root2 = [1, 2, 4, 5, 3]

Output: false
Explanation: 
Level 0: [1] and [1]
Level 1: [2, 3] and [2, 4]
Since the node values at level 1 are not anagrams, the answer is false.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-21T09:40:14.293Z  

```cpp
/* Structure of binary tree Node
class Node {
    public:
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/
vector<vector<int>> bfs(Node* root){
    queue<Node*> que;
    que.push(root);
    vector<vector<int>> res;
    while(!que.empty()){
        int size = que.size();
        vector<int> temp;
        for(int i = 0; i <  size ; i++){
            Node* node = que.front();
            temp.push_back(node->data);
            if(node->left)
            que.push(node->left);
            if(node->right) que.push(node->right);
            que.pop();
        }
        sort(temp.begin(),temp.end());
        res.push_back(temp);
    }
    return res;
}
class Solution {
  public:
    bool areAnagrams(Node* root1, Node* root2) {
        // code here
       vector<vector<int>> mat1;
       vector<vector<int>> mat2;
       mat1 = bfs(root1);
       mat2 = bfs(root2);
       if(mat1.size() != mat2.size()) return false;
       for(int i = 0; i < mat1.size(); i++){
          if(mat1[i] != mat2[i]) return false;
       }
       return true;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-all-levels-of-two-trees-are-anagrams-or-not/1)