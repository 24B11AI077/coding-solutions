class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        
        int  n = parent.size();
        vector<pair<int,int>> sorted;
        for(int i = 0; i < n ; i++){
            sorted.push_back({parent[i],i});
        }
        sort(sorted.begin(),sorted.end());
        vector<int> depth(n);
        depth[0] = 1;
       int maxi = 1;
        for(int i = 1; i < n ; i++){
           depth[sorted[i].second] = depth[sorted[i].first]+1;
            maxi = max(maxi,depth[sorted[i].second]);
        }
        int h = maxi;
        long long sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += 1LL*(nums[i]) * (h-depth[i]+1);
        }
        return sum;
    }
};