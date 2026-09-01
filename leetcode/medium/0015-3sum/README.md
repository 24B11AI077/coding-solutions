# 3Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

 

 **Example 1:** 

```
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

```

 **Example 2:** 

```
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

```

 **Example 3:** 

```
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

```

 

 **Constraints:** 

- 3 <= nums.length <= 3000
- -105 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 3058 ms (beats 5.01%)  
**Memory:** 510.2 MB (beats 5.16%)  
**Submitted:** 2026-09-01T06:15:26.325Z  

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n ;i++){
            mp[nums[i]] = i;
        }
        set<vector<int>> ans;
        for(int i = 0; i < n-2 ; i++){
            int target = -1*nums[i];
            for(int j = i+1; j < n ; j++){
                int com = target-nums[j];
                if(mp.count(com) && mp[com] != j && mp[com] > j ){
                    vector<int> temp = {nums[i],nums[j],nums[mp[com]]};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
            }
        }
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum/)