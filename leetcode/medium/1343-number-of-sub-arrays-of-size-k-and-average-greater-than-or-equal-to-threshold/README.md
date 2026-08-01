# Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `arr` and two integers `k` and `threshold`, return  *the number of sub-arrays of size* `k` *and average greater than or equal to* `threshold`.

 

 **Example 1:** 

```
Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
Output: 3
Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively. All other sub-arrays of size 3 have averages less than 4 (the threshold).

```

 **Example 2:** 

```
Input: arr = [11,13,17,23,29,31,7,5,2,3], k = 3, threshold = 5
Output: 6
Explanation: The first 6 sub-arrays of size 3 have averages greater than 5. Note that averages are not integers.

```

 

 **Constraints:** 

- 1 <= arr.length <= 105
- 1 <= arr[i] <= 104
- 1 <= k <= arr.length
- 0 <= threshold <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 59.1 MB (beats 70.94%)  
**Submitted:** 2026-08-01T09:37:47.124Z  

```cpp
class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
         
        int sum = 0;
        for(int i = 0; i< k ; i++){
            sum += nums[i];
        }
        int i = 0;
        int avg = sum/k;
        int cnt = 0;
        if(avg >= threshold) cnt++;
        for(int j = k; j < nums.size(); j++){
            sum += nums[j];
           sum -= nums[i];
            avg = sum / k;
            if(avg >= threshold) cnt++;
            i++;
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/)