# Smallest Subsequence of Distinct Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, return  *the  **lexicographically smallest*   *subsequence**  of*  `s`  *that contains all the distinct characters of*  `s`  *exactly once*.

 

 **Example 1:** 

```
Input: s = "bcabc"
Output: "abc"

```

 **Example 2:** 

```
Input: s = "cbacdcbc"
Output: "acdb"

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consists of lowercase English letters.

 

 **Note:**  This question is the same as 316: https://leetcode.com/problems/remove-duplicate-letters/

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 13.10%)  
**Memory:** 8.9 MB (beats 11.16%)  
**Submitted:** 2026-09-16T09:31:10.793Z  

```cpp
class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int> freq;
        for(char val : s){
            freq[val]+=1;
        }
        stack<char> st;
        unordered_map<char,bool> checker;
        for(char ch : s){
            while(!st.empty() && ch < st.top() && freq[st.top()] > 1 && !checker[ch]){
                freq[st.top()] -= 1;
                
                checker[st.top()] = false;
                st.pop();
            }
            if(checker[ch] == false) {
                st.push(ch);
                checker[ch] = true;
            }
            else {
               freq[ch] -= 1;
            }
        }
        string res = "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/)