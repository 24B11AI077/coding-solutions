# Count Substrings That Satisfy K-Constraint I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a  **binary**  string `s` and an integer `k`.

A  **binary string**  satisfies the  **k-constraint**  if  **either**  of the following conditions holds:

- The number of 0's in the string is at most k.
- The number of 1's in the string is at most k.

Return an integer denoting the number of substrings of `s` that satisfy the  **k-constraint**.

 

 **Example 1:** 

 **Input:**  s = "10101", k = 1

 **Output:**  12

 **Explanation:** 

Every substring of `s` except the substrings `"1010"`, `"10101"`, and `"0101"` satisfies the k-constraint.

 **Example 2:** 

 **Input:**  s = "1010101", k = 2

 **Output:**  25

 **Explanation:** 

Every substring of `s` except the substrings with a length greater than 5 satisfies the k-constraint.

 **Example 3:** 

 **Input:**  s = "11111", k = 1

 **Output:**  15

 **Explanation:** 

All substrings of `s` satisfy the k-constraint.

 

 **Constraints:** 

- 1 <= s.length <= 50
- 1 <= k <= s.length
- s[i] is either '0' or '1'.

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 9.94%)  
**Memory:** 9.3 MB (beats 11.65%)  
**Submitted:** 2026-08-08T15:24:51.717Z  

```cpp
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        unordered_map<char,int> mp;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            mp['1'] = 0,mp['0'] = 0;
            for(int j = i; j < s.size(); j++){
                mp[s[j]]++;
                if(mp['1'] <= k || mp['0'] <= k) cnt++;
            }
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-substrings-that-satisfy-k-constraint-i/)