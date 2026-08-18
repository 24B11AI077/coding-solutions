# Permutations II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a collection of numbers, `nums`, that might contain duplicates, return  *all possible unique permutations  **in any order**.* 

 

 **Example 1:** 

```
Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]

```

 **Example 2:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 8
- -10 <= nums[i] <= 10

## Solution

**Language:** C++  
**Runtime:** 492 ms (beats 5.06%)  
**Memory:** 160.7 MB (beats 5.08%)  
**Submitted:** 2026-08-18T09:49:50.796Z  

```cpp
class Solution {
public:
    vector<vector<int>> res;
    void generate(vector<int> nums, vector<int> temp, vector<int> visited){
        if(temp.size() == nums.size()){
            res.push_back(temp); return;
        }
        for(int i = 0; i < nums.size() ; i++){
            if(visited[i] == 0){
                visited[i] = 1;
                temp.push_back(nums[i]);
                generate(nums,temp,visited);
                temp.pop_back();
                visited[i] = 0;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp;
        vector<int> visited(nums.size());
        generate(nums,temp,visited);
        set < vector<int>> st;
        for(int i = 0; i < res.size() ; i++){
            st.insert(res[i]);

        }
        vector<vector<int>>fin;
        for(auto val : st){
            fin.push_back(val);
        }
        return fin;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations-ii/)