# Q1. Count Valid Prefixes

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a binary string `s`.

A prefix of `s` is considered  **valid**  if its characters can be rearranged to form an  **alternating**  string.

Return the number of valid prefixes of `s`.

A string is considered  **alternating**  if no two adjacent characters are equal.

 

 **Example 1:** 

 **Input:**  s = "00101"

 **Output:**  3

 **Explanation:** 

The valid prefixes are:

- "0": It is already an alternating string.
- "001": It can be rearranged into "010", which is an alternating string.
- "00101": It can be rearranged into "01010", which is an alternating string.

Thus, the answer is 3.

 **Example 2:** 

 **Input:**  s = "101"

 **Output:**  3

 **Explanation:** 

All prefixes of `s = "101"` are already alternating strings. Thus, the answer is 3.

 

 **Constraints:** 

- 1 <= s.length <= 100
- s consists only of '0' and '1'.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 33.33%)  
**Memory:** 9.4 MB (beats 50.00%)  
**Submitted:** 2026-08-03T03:44:37.507Z  

```cpp
class Solution {
public:
    int countValidPrefixes(string s) {
        int zeroes = 0, ones = 0;
        int cnt = 0;
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == '0') zeroes++;
            else ones++;
            if(ones == 0 && zeroes ==  1) cnt++;
            else if(zeroes == 0 && ones == 1) cnt++;
            else if(zeroes > 0 && ones > 0 && abs(zeroes-ones) <= 1) cnt++;
            
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-valid-prefixes/)