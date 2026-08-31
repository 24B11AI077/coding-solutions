# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** C++  
**Runtime:** 284 ms (beats 21.36%)  
**Memory:** 46.9 MB (beats 28.96%)  
**Submitted:** 2026-08-31T08:58:12.560Z  

```cpp
class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
       vector<int> prefix(arr.size());
        int sum = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            prefix[i] =  sum;
        }
        unordered_map<int,int> mp;
        mp[k] = 0;
        mp[0] = 1;
        int zeroes = 0;
        for(int i = 0; i < prefix.size(); i++ ){
            if(mp.find(prefix[i]-k) != mp.end()){
                int cpy = k;
                cout << prefix[i]  << " ";
                zeroes += mp[prefix[i]-k];
                
                 
            }
             if(mp.find(prefix[i]) != mp.end()){
                mp[prefix[i]] +=1;
            }
            else mp[prefix[i]] = 1;
        }
        return zeroes;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)