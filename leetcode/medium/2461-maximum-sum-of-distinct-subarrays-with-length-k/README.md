# Maximum Sum of Distinct Subarrays With Length K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `nums` and an integer `k`. Find the maximum subarray sum of all the subarrays of `nums` that meet the following conditions:

- The length of the subarray is k, and
- All the elements of the subarray are distinct.

Return  *the maximum subarray sum of all the subarrays that meet the conditions**.*  If no subarray meets the conditions, return `0`.

 *A  **subarray**  is a contiguous non-empty sequence of elements within an array.* 

 

 **Example 1:** 

```
Input: nums = [1,5,4,2,9,9,9], k = 3
Output: 15
Explanation: The subarrays of nums with length 3 are:
- [1,5,4] which meets the requirements and has a sum of 10.
- [5,4,2] which meets the requirements and has a sum of 11.
- [4,2,9] which meets the requirements and has a sum of 15.
- [2,9,9] which does not meet the requirements because the element 9 is repeated.
- [9,9,9] which does not meet the requirements because the element 9 is repeated.
We return 15 because it is the maximum subarray sum of all the subarrays that meet the conditions

```

 **Example 2:** 

```
Input: nums = [4,4,4], k = 3
Output: 0
Explanation: The subarrays of nums with length 3 are:
- [4,4,4] which does not meet the requirements because the element 4 is repeated.
We return 0 because no subarrays meet the conditions.

```

 

 **Constraints:** 

- 1 <= k <= nums.length <= 105
- 1 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.5 MB  
**Submitted:** 2026-08-01T05:58:43.917Z  

```cpp
class Solution {
public:
    
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        unordered_map<int,int> mp;
        bool valid = true;
        for(int i = 0; i < k ; i++) {
            mp[nums[i]]+=1;
            sum += nums[i];
            if(mp[nums[i]] > 1) valid = false;
        }
        int i = 0;
        long long  maxi =0;
        for(int j = k ; j < nums.size() ; j++ ){
           if(valid) maxi = max(maxi,sum);
           sum += nums[j];
           sum -= nums[i];
           mp[nums[i]]-=1;
           mp[nums[j]] += 1;
           for(auto val : mp){
            if(val.second > 1 ) {
                valid = false;break;
            }
            valid = true;
           }
           i++;
        }
        if(valid) maxi = max(maxi,sum);
        return maxi;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/)