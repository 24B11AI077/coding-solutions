class Solution {
public:
      vector<vector<int>> res;
      void  found(vector<int>& cand,int i , int target,vector<int> &temp){
        if(target == 0) {
            vector<int> cpy = temp;
            //sort(cpy.begin(),cpy.end());
            res.push_back(cpy); return;
        }
        if(i == cand.size()) return;
        if(target < 0) return ;
         temp.push_back(cand[i]);
         found(cand,i+1,target-cand[i],temp);
          temp.pop_back();
        while (i+1<cand.size() && cand[i]==cand[i+1]){
            i++;
        }
         found(cand,i+1,target,temp);
        return;
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        found(candidates,0,target,temp);
        
        return res;
    }
};