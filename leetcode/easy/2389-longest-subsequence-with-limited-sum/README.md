# Longest Subsequence With Limited Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` of length `n`, and an integer array `queries` of length `m`.

Return  *an array* `answer` *of length* `m` *where* `answer[i]` *is the  **maximum**  size of a  **subsequence**  that you can take from* `nums` *such that the  **sum**  of its elements is less than or equal to* `queries[i]`.

A  **subsequence**  is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

 

 **Example 1:** 

```
Input: nums = [4,5,2,1], queries = [3,10,21]
Output: [2,3,4]
Explanation: We answer the queries as follows:
- The subsequence [2,1] has a sum less than or equal to 3. It can be proven that 2 is the maximum size of such a subsequence, so answer[0] = 2.
- The subsequence [4,5,1] has a sum less than or equal to 10. It can be proven that 3 is the maximum size of such a subsequence, so answer[1] = 3.
- The subsequence [4,5,2,1] has a sum less than or equal to 21. It can be proven that 4 is the maximum size of such a subsequence, so answer[2] = 4.

```

 **Example 2:** 

```
Input: nums = [2,3,4,5], queries = [1]
Output: [0]
Explanation: The empty subsequence is the only subsequence that has a sum less than or equal to 1, so answer[0] = 0.
```

 

 **Constraints:** 

- n == nums.length
- m == queries.length
- 1 <= n, m <= 1000
- 1 <= nums[i], queries[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 21.85%)  
**Memory:** 18.1 MB (beats 16.36%)  
**Submitted:** 2026-07-31T04:15:30.589Z  

```cpp
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> prefix(nums.size());
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            prefix[i] = sum;
        }
        vector<int> answer(queries.size());
        for(int i = 0; i < queries.size(); i++){
            int val = queries[i];
            int cnt = 0,k = 0;
            while(  k < prefix.size() && val >= prefix[k]){
                k++;
                cnt++;
            }
            answer[i] = cnt;
        }
        return answer;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-subsequence-with-limited-sum/)