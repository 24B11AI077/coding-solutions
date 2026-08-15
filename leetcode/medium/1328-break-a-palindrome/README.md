# Break a Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a palindromic string of lowercase English letters `palindrome`, replace  **exactly one**  character with any lowercase English letter so that the resulting string is  **not**  a palindrome and that it is the  **lexicographically smallest**  one possible.

Return  *the resulting string. If there is no way to replace a character to make it not a palindrome, return an  **empty string**.* 

A string `a` is lexicographically smaller than a string `b` (of the same length) if in the first position where `a` and `b` differ, `a` has a character strictly smaller than the corresponding character in `b`. For example, `"abcc"` is lexicographically smaller than `"abcd"` because the first position they differ is at the fourth character, and `'c'` is smaller than `'d'`.

 

 **Example 1:** 

```
Input: palindrome = "abccba"
Output: "aaccba"
Explanation: There are many ways to make "abccba" not a palindrome, such as "zbccba", "aaccba", and "abacba".
Of all the ways, "aaccba" is the lexicographically smallest.

```

 **Example 2:** 

```
Input: palindrome = "a"
Output: ""
Explanation: There is no way to replace a single character to make "a" not a palindrome, so return an empty string.

```

 

 **Constraints:** 

- 1 <= palindrome.length <= 1000
- palindrome consists of only lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.4 MB (beats 39.23%)  
**Submitted:** 2026-08-15T08:59:13.464Z  

```cpp
class Solution {
public:
    string breakPalindrome(string s) {
        int n = s.size();
        if(n == 1) return "";
        int left = 0, right = n-1;
        while(left < right){
            if(s[left]!='a'){
                s[left] = 'a'; return s;
            }
            left++;right--;
        }
        s[n-1] = 'b';
        return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/break-a-palindrome/)