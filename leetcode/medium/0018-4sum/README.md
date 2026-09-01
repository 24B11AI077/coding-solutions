# 4Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of `n` integers, return  *an array of all the  **unique**  quadruplets*  `[nums[a], nums[b], nums[c], nums[d]]` such that:

- 0 <= a, b, c, d < n
- a, b, c, and d are distinct.
- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

```

 **Example 2:** 

```
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 200
- -109 <= nums[i] <= 109
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 521 ms (beats 5.00%)  
**Memory:** 83.7 MB (beats 5.00%)  
**Submitted:** 2026-09-01T14:33:05.794Z  

```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};
        set<vector<int>> ans;
        unordered_map<long long,long long> mp;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]] =i;
        for(int i = 0; i < nums.size()-3; i++){
            for(int j = i+1; j < nums.size()-2; j++){
                long long newtarget = (long long)target - (nums[i]+nums[j]);
                for(int k = j+1; k < nums.size() ; k++){
                    long long com = newtarget - nums[k];
                    if(mp.count(com) && mp[com] != k && mp[com] > k){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[mp[com]]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/4sum/)