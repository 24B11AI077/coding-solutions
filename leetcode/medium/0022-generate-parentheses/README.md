# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given `n` pairs of parentheses, write a function to  *generate all combinations of well-formed parentheses*.

 

 **Example 1:** 

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

 **Example 2:** 

```
Input: n = 1
Output: ["()"]

```

 

 **Constraints:** 

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 12.66%)  
**Memory:** 16.3 MB (beats 18.20%)  
**Submitted:** 2026-08-30T09:49:14.148Z  

```cpp
class Solution {
public:
    void generator(int n ,vector<string> &res, string temp , int unmatched){
        if(unmatched == 0 && n == 0 ){
            res.push_back(temp);
            return;
        }
        if(unmatched < 0 || (n) < 0) return;
        generator(n-1,res,temp+'(',unmatched+1);
        generator(n,res,temp+')',unmatched - 1);

    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp = "";
        generator(n ,  res , temp ,  0);
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)