class Solution {
public:
    void generator(vector<int>&nums,vector<int>&temp,int idx,vector<bool>& visited,int& cnt){
        if(temp.size() == (nums.size()-1)){
            cnt++;return;
        }
        for(int i = 1; i < nums.size(); i++){
            
            if(!visited[i] && (nums[i]%(idx+1) == 0 || (idx+1)%nums[i] == 0)){
                visited[i]=true;
                temp.push_back(nums[i]);
                generator(nums,temp,idx+1,visited,cnt);
                temp.pop_back();
                visited[i] = false;
            }
        }
    }
    int countArrangement(int n) {
        vector<int> nums(n+1);
        for(int i = 1; i <= n ; i++) nums[i] = i;
        vector<bool> visited(n+1,false);
        vector<int> temp;
        int cnt = 0;
        generator(nums,temp,0,visited,cnt);
        return cnt;
    }
};