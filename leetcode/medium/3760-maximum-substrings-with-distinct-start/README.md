# Maximum Substrings With Distinct Start

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string `s` consisting of lowercase English letters.

Return an integer denoting the  **maximum**  number of substrings you can split `s` into such that each  **substring**  starts with a  **distinct**  character (i.e., no two substrings start with the same character).

 

 **Example 1:** 

 **Input:**  s = "abab"

 **Output:**  2

 **Explanation:** 

- Split "abab" into "a" and "bab".
- Each substring starts with a distinct character i.e 'a' and 'b'. Thus, the answer is 2.

 **Example 2:** 

 **Input:**  s = "abcd"

 **Output:**  4

 **Explanation:** 

- Split "abcd" into "a", "b", "c", and "d".
- Each substring starts with a distinct character. Thus, the answer is 4.

 **Example 3:** 

 **Input:**  s = "aaaa"

 **Output:**  1

 **Explanation:** 

- All characters in "aaaa" are 'a'.
- Only one substring can start with 'a'. Thus, the answer is 1.

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 25 ms (beats 59.11%)  
**Memory:** 25.1 MB (beats 60.98%)  
**Submitted:** 2026-08-16T12:53:22.562Z  

```cpp
class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> mp;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            if(mp[s[i]] == 1) cnt++;
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-substrings-with-distinct-start/)