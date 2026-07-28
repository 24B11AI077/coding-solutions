# Smallest Palindromic Rearrangement I

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a  **palindromic**  string `s`.

Return the  **lexicographically smallest**  palindromic permutation of `s`.

 

 **Example 1:** 

 **Input:**  s = "z"

 **Output:**  "z"

 **Explanation:** 

A string of only one character is already the lexicographically smallest palindrome.

 **Example 2:** 

 **Input:**  s = "babab"

 **Output:**  "abbba"

 **Explanation:** 

Rearranging `"babab"` → `"abbba"` gives the smallest lexicographic palindrome.

 **Example 3:** 

 **Input:**  s = "daccad"

 **Output:**  "acddca"

 **Explanation:** 

Rearranging `"daccad"` → `"acddca"` gives the smallest lexicographic palindrome.

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of lowercase English letters.
- s is guaranteed to be palindromic.

## Solution

**Language:** C++  
**Runtime:** 174 ms (beats 10.33%)  
**Memory:** 60.7 MB (beats 81.54%)  
**Submitted:** 2026-07-28T08:51:59.414Z  

```cpp
class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1) return s;
       sort(s.begin(),s.end());
       string res(s.size(),'0');
       int left = 0,right = res.size()-1;
       char ch = '1';
       int idx = -1;
       for(int i = 0; i < s.size()-1; i+=2){
        if(s[i] == s[i+1]){
            res[left] = s[i];
            res[right] = s[i];
            left++;
            right--;
        }
        else {
            ch = s[i];
            cout << ch << " ";
            idx = (i+1);
            break;
        }
       }
       if(s.size()%2 && ch == '1') ch = s[s.size()-1];
       if(idx >= 0){
            for(int i = idx; i < s.size()-1; i+=2){
        if(s[i] == s[i+1]){
            res[left] = s[i];
            res[right] = s[i];
            left++;
            right--;
        }
       }
       }
       int parity = (s.size()) % 2;
       if(parity && ch != '1'){
        
        int index = (s.size()/2);
        res[index] = ch;
       }
       
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-palindromic-rearrangement-i/)