# Count Elements With Maximum Frequency

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an array `nums` consisting of  **positive**  integers.

Return  *the  **total frequencies**  of elements in*  `nums`  *such that those elements all have the  **maximum**  frequency*.

The  **frequency**  of an element is the number of occurrences of that element in the array.

 

 **Example 1:** 

```
Input: nums = [1,2,2,3,1,4]
Output: 4
Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
So the number of elements in the array with maximum frequency is 4.

```

 **Example 2:** 

```
Input: nums = [1,2,3,4,5]
Output: 5
Explanation: All elements of the array have a frequency of 1 which is the maximum.
So the number of elements in the array with maximum frequency is 5.

```

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 1 <= nums[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 22.73%)  
**Memory:** 23.7 MB (beats 8.73%)  
**Submitted:** 2026-09-02T08:24:36.899Z  

```cpp
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        unordered_map<int,int> mp;
        set<int> st;
        for(int i = 0; i < n ; i++){
            mp[nums[i]]++;
            maxi = max(maxi,mp[nums[i]]);
            st.insert(nums[i]);
        }
        int count = 0;
        for(int val : st){
            if(mp[val] == maxi) count++;
        }
        return count*maxi;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-elements-with-maximum-frequency/)