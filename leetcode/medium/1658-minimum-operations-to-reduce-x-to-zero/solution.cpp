class Solution {
public:
    vector<int> res;
    void generator(vector<int> nums,int cnt,int x){
        if(x < 0) return;
        if(x == 0) {
            res.push_back(cnt);
        }
        vector<int> part(nums.begin()+1,nums.end());
        generator(part,cnt +1,x-nums[0]);
        vector<int> spart(nums.begin(),nums.end()-1);
        generator(spart,cnt+1,x-nums[nums.size()-1]);

    }
    int minOperations(vector<int>& nums, int x) {
        generator(nums,0,x);
        if(res.size() == 0) return -1;
        sort(res.begin(),res.end());
        return res[0];
    }
};