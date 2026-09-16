# Remove Duplicate Letters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, remove duplicate letters so that every letter appears once and only once. You must make sure your result is  **the smallest in lexicographical order**  among all possible results.

 

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

- 1 <= s.length <= 104
- s consists of lowercase English letters.

 

 **Note:**  This question is the same as 1081: https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 15.62%)  
**Memory:** 10.1 MB (beats 6.52%)  
**Submitted:** 2026-09-16T06:26:53.215Z  

```cpp
class Solution {
public:
    string removeDuplicateLetters(string s) {
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

[View on LeetCode](https://leetcode.com/problems/remove-duplicate-letters/)