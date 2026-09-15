# Partition Labels

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string `s`. We want to partition the string into as many parts as possible so that each letter appears in at most one part. For example, the string `"ababcc"` can be partitioned into `["abab", "cc"]`, but partitions such as `["aba", "bcc"]` or `["ab", "ab", "cc"]` are invalid.

Note that the partition is done so that after concatenating all the parts in order, the resultant string should be `s`.

Return  *a list of integers representing the size of these parts*.

 

 **Example 1:** 

```
Input: s = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.

```

 **Example 2:** 

```
Input: s = "eccbbbbdec"
Output: [10]

```

 

 **Constraints:** 

- 1 <= s.length <= 500
- s consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 24.16%)  
**Memory:** 9.3 MB (beats 6.04%)  
**Submitted:** 2026-09-15T05:55:12.477Z  

```cpp
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        unordered_map<int,int> freq;
        for(int i = 0; i < n ; i++){
            freq[s[i]]++;
        }
        unordered_map<int,int> trac;
        int dis = 0,count = 0;
        int prev = -1;
        vector<int> res;
        for(int i = 0; i < n ; i++){
            trac[s[i]]++;
            if(trac[s[i]] == 1) dis++;
            if(trac[s[i]] == freq[s[i]]){
                count++;
            }
            if(dis == count){
                res.push_back(i-prev);
                prev = i;
                dis = 0;
                count = 0;
            }
        }
        
        return res;
    }
};
//a - 4
//b-3
//c-2
//d-2
//e-3
//f1
//g-1//h-2//i-2//j-2//k-1//l-1
```

---

[View on LeetCode](https://leetcode.com/problems/partition-labels/)