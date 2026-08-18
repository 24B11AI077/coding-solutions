class Solution {
public:
    vector<vector<int>> res;
    
    void  found(vector<int>& cand,int i , int target,vector<int> &temp,int k){
        if(target == 0 && k == 0) {res.push_back(temp); return;}
        if(i>= cand.size()) return;
        if(target < 0 || k < 0) return ;
         temp.push_back(cand[i]);
         found(cand,i+1,target-cand[i],temp,k-1);
          temp.pop_back();
         found(cand,i+1,target,temp,k);
        return;
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr = {1,2,3,4,5,6,7,8,9};
        vector<int> temp;
        found(arr,0,n,temp,k);
        return res;
    }
};