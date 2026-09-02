# Split Array Largest Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an integer array `nums` and an integer `k`, split `nums` into `k` non-empty subarrays such that the largest sum of any subarray is  **minimized**.

Return  *the minimized largest sum of the split*.

A  **subarray**  is a contiguous part of the array.

 

 **Example 1:** 

```
Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.

```

 **Example 2:** 

```
Input: nums = [1,2,3,4,5], k = 2
Output: 9
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9.

```

 

 **Constraints:** 

- 1 <= nums.length <= 1000
- 0 <= nums[i] <= 106
- 1 <= k <= min(50, nums.length)

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.6 MB (beats 43.76%)  
**Submitted:** 2026-09-02T09:20:20.376Z  

```cpp
class Solution {
public:
   int isValid(vector<int>&nums,int mid){
        int cnt = 0;int curr = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > mid) return -1;
            if(nums[i] + curr > mid){
                curr = 0;
                cnt++;
            }
            curr += nums[i];
        }
        cnt++;
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        long long sum = 0;
        for(int val : nums) sum += val;
        int low = 0, high = sum;
        while(low < high){
            int mid = low + (high - low) / 2;
            int count = isValid(nums,mid);
            if(count <= k && count != -1){
                high = mid;
            }
            else low = mid+1;
        }
        return low ;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/split-array-largest-sum/)