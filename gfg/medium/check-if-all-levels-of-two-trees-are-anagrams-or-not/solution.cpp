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
