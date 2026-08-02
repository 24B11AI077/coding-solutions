# Q1. Maximize Pair Strength Using GCD

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums`.

Choose  **exactly one**  pair of  **distinct**  indices `i` and `j`. The  **strength**  of the pair is defined as `(nums[i] * nums[j]) / gcd(nums[i], nums[j])2`.

Return the  **maximum**  strength over all possible pairs.

The term `gcd(a, b)` denotes the  **greatest common divisor**  of `a` and `b`.

 

 **Example 1:** 

 **Input:**  nums = [2,3,5]

 **Output:**  15

 **Explanation:** 

Choosing `i = 1` and `j = 2` gives strength `(3 * 5) / gcd(3, 5)2 = 15 / 1 = 15`, which is the maximum over all pairs.

 **Example 2:** 

 **Input:**  nums = [4,6,8]

 **Output:**  12

 **Explanation:** 

Choosing `i = 1` and `j = 2` gives strength `(6 * 8) / gcd(6, 8)2 = 48 / 4 = 12`, which is the maximum over all pairs.

 **Example 3:** 

 **Input:**  nums = [3,3]

 **Output:**  1

 **Explanation:** 

Choosing `i = 0` and `j = 1` gives strength `(3 * 3) / gcd(3, 3)2 = 9 / 9 = 1`, the maximum over all pairs.

 

 **Constraints:** 

- 2 <= nums.length <= 2000
- 1 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 763 ms (beats 100.00%)  
**Memory:** 37 MB (beats 100.00%)  
**Submitted:** 2026-08-02T02:40:10.619Z  

```cpp
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi = LLONG_MIN;
        for(int i = 0; i < nums.size() -1 ; i++){
            
            for(int j = i+1 ; j < nums.size(); j++){
                long long val = gcd(nums[i],nums[j]);
                val = val*val;
                long long product = 1LL*nums[i]*nums[j];
                maxi = max(maxi , product / val );
            }
        }
        return maxi;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximize-pair-strength-using-gcd/)