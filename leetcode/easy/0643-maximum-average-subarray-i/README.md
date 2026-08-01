# Maximum Average Subarray I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` consisting of `n` elements, and an integer `k`.

Find a contiguous subarray whose  **length is equal to**  `k` that has the maximum average value and return  *this value*. Any answer with a calculation error less than `10-5` will be accepted.

 

 **Example 1:** 

```
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

```

 **Example 2:** 

```
Input: nums = [5], k = 1
Output: 5.00000

```

 

 **Constraints:** 

- n == nums.length
- 1 <= k <= n <= 105
- -104 <= nums[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 45.79%)  
**Memory:** 113.9 MB (beats 28.46%)  
**Submitted:** 2026-08-01T06:26:53.214Z  

```cpp
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double  maxi = INT_MIN;
        double sum = 0;
        for(int i = 0; i< k ; i++){
            sum += nums[i];
        }
        int i = 0;
        double avg = sum/k;
        maxi = max(maxi,avg);
        for(int j = k; j < nums.size(); j++){
            sum += nums[j];
           sum -= nums[i];
            avg = sum / k;
            maxi = max(maxi,avg);
            i++;
        }
        return maxi;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-average-subarray-i/)