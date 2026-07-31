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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if((!p && q) || (!p && q) )return 0;
       queue<TreeNode*> que1;
       queue<TreeNode*> que2;
       que1.push(p);que2.push(q);
       while(!que1.empty() && !que2.empty()){
           
            if(que1.size() != que2.size()) return false;
            for(int i = 0; i < que1.size(); i++){
                TreeNode* node1 = que1.front();
                TreeNode* node2 = que2.front();
                que1.pop();que2.pop();
                if(node1 && !node2) return false;
                if(node2 && !node1) return false;
                if(node1->val != node2->val) return false;
                if(node1->left) que1.push(node1->left);
                if(node1->right) que1.push(node1->right);
                if(node2->left) que2.push(node2->left);
                if(node2->right) que2.push(node2->right); 
                if((node1->left && !node2->left) || (!node1->left && node2->left)) return false;
                 if((node1->right && !node2->right) || (!node1->right && node2->right)) return false;
            }
       } 
       return true;
    }
};