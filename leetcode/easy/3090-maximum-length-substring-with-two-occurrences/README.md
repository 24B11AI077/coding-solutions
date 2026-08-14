# Maximum Length Substring With Two Occurrences

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s`, return the  **maximum**  length of a substring such that it contains  *at most two occurrences*  of each character.

 

 **Example 1:** 

 **Input:**  s = "bcbbbcba"

 **Output:**  4

 **Explanation:** 

The following substring has a length of 4 and contains at most two occurrences of each character: `"bcbbbcba"`.

 **Example 2:** 

 **Input:**  s = "aaaa"

 **Output:**  2

 **Explanation:** 

The following substring has a length of 2 and contains at most two occurrences of each character: `"aaaa"`.

 

 **Constraints:** 

- 2 <= s.length <= 100
- s consists only of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 16.88%)  
**Memory:** 9.5 MB (beats 57.72%)  
**Submitted:** 2026-08-14T04:04:12.748Z  

```cpp
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i = 0, j = 0;
        unordered_map<int,int> mp;
        int maxi = 0;
        for(int j = 0; j < s.size(); j++){
            mp[s[j]]++;
            if(mp[s[j]] > 2){
                while(i < j && mp[s[j]] > 2){
                    mp[s[i]]--;
                    i++;
                }
            }
             maxi = max(maxi, j-i+1);
            
        }
        return maxi;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/)