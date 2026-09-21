# Jump Game II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a  **0-indexed**  array of integers `nums` of length `n`. You are initially positioned at index 0.

Each element `nums[i]` represents the maximum length of a forward jump from index `i`. In other words, if you are at index `i`, you can jump to any index `(i + j)` where:

- 0 <= j <= nums[i] and
- i + j < n

Return  *the minimum number of jumps to reach index* `n - 1`. The test cases are generated such that you can reach index `n - 1`.

 

 **Example 1:** 

```
Input: nums = [2,3,1,1,4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.

```

 **Example 2:** 

```
Input: nums = [2,3,0,1,4]
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- 0 <= nums[i] <= 1000
- It's guaranteed that you can reach nums[n - 1].

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 21.9 MB (beats 14.95%)  
**Submitted:** 2026-09-21T05:15:38.307Z  

```cpp
class Solution {
public:
    int jump(vector<int>& nums) {
    
       int n = nums.size();
       if(n == 1) return 0;
       vector<int> prefix(n);
       int zeroes = 0;
       for(int i = 0; i < n; i++){
         if(nums[i] == 0){
            zeroes++;
            prefix[i] = zeroes;
         }
         else {
            zeroes = 0;
            prefix[i] = zeroes;
         }
       }
       int count = 1;
       int i = 0;
       while(i < n){
        int maxi = 0;
        int size = i+nums[i];
        int idx = 0;
        if(size >= n-1) return count;
        for(int j = i+1; j <= size; j++){
            if(nums[j]+j > maxi){
                maxi = nums[j]+j;
                idx = j;
            }
        }
         count++;
        if(maxi >= n-1) return count;
        if(prefix[maxi] > 0){
            maxi -= prefix[maxi];
        }
       
        i  = idx;
       }
       return count;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/jump-game-ii/)