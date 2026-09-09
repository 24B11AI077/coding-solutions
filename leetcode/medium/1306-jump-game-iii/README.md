# Jump Game III

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of non-negative integers `arr`, you are initially positioned at `start` index of the array. When you are at index `i`, you can jump to `i + arr[i]` or `i - arr[i]`, check if you can reach  **any**  index with value 0.

Notice that you can not jump outside of the array at any time.

 

 **Example 1:** 

```
Input: arr = [4,2,3,0,3,1,2], start = 5
Output: true
Explanation: 
All possible ways to reach at index 3 with value 0 are: 
index 5 -> index 4 -> index 1 -> index 3 
index 5 -> index 6 -> index 4 -> index 1 -> index 3 

```

 **Example 2:** 

```
Input: arr = [4,2,3,0,3,1,2], start = 0
Output: true 
Explanation: 
One possible way to reach at index 3 with value 0 is: 
index 0 -> index 4 -> index 1 -> index 3

```

 **Example 3:** 

```
Input: arr = [3,0,2,1,2], start = 2
Output: false
Explanation: There is no way to reach at index 1 with value 0.

```

 

 **Constraints:** 

- 1 <= arr.length <= 5 * 104
- 0 <= arr[i] < arr.length
- 0 <= start < arr.length

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 30.5 MB (beats 76.49%)  
**Submitted:** 2026-09-09T05:29:55.292Z  

```cpp
class Solution {
public:
   bool bfs(vector<int>&nums,int idx , vector<bool> &visited){
        if(idx < 0 || idx >= nums.size() || visited[idx]) return false;
        if(nums[idx] == 0) return true;
        visited[idx] = true;
        bool left = bfs(nums,idx-nums[idx],visited);
        bool right = bfs(nums,idx+nums[idx],visited);
        return left || right;
    }
    bool canReach(vector<int>& nums,int& start) {
        int n = nums.size();
        vector<bool>visited(n,false);
        return bfs(nums,start,visited);
    }
};
// 1 2 3 1 3 1
```

---

[View on LeetCode](https://leetcode.com/problems/jump-game-iii/)