# Beautiful Arrangement

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Suppose you have `n` integers labeled `1` through `n`. A permutation of those `n` integers `perm` (**1-indexed**) is considered a  **beautiful arrangement**  if for every `i` (`1 <= i <= n`),  **either**  of the following is true:

- perm[i] is divisible by i.
- i is divisible by perm[i].

Given an integer `n`, return  *the  **number**  of the  **beautiful arrangements**  that you can construct*.

 

 **Example 1:** 

```
Input: n = 2
Output: 2
Explanation: 
The first beautiful arrangement is [1,2]:
    - perm[1] = 1 is divisible by i = 1
    - perm[2] = 2 is divisible by i = 2
The second beautiful arrangement is [2,1]:
    - perm[1] = 2 is divisible by i = 1
    - i = 2 is divisible by perm[2] = 1

```

 **Example 2:** 

```
Input: n = 1
Output: 1

```

 

 **Constraints:** 

- 1 <= n <= 15

## Solution

**Language:** C++  
**Runtime:** 74 ms (beats 14.94%)  
**Memory:** 8.1 MB (beats 45.75%)  
**Submitted:** 2026-08-07T04:45:09.013Z  

```cpp
class Solution {
public:
    void generator(vector<int>&nums,vector<int>&temp,int idx,vector<bool>& visited,int& cnt){
        if(temp.size() == (nums.size()-1)){
            cnt++;return;
        }
        for(int i = 1; i < nums.size(); i++){
            
            if(!visited[i] && (nums[i]%(idx+1) == 0 || (idx+1)%nums[i] == 0)){
                visited[i]=true;
                temp.push_back(nums[i]);
                generator(nums,temp,idx+1,visited,cnt);
                temp.pop_back();
                visited[i] = false;
            }
        }
    }
    int countArrangement(int n) {
        vector<int> nums(n+1);
        for(int i = 1; i <= n ; i++) nums[i] = i;
        vector<bool> visited(n+1,false);
        vector<int> temp;
        int cnt = 0;
        generator(nums,temp,0,visited,cnt);
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/beautiful-arrangement/)