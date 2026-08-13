# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 29.35%)  
**Memory:** 9.6 MB (beats 21.06%)  
**Submitted:** 2026-08-13T08:39:18.204Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        bool n = false;
        if( x < 0) n = true;
        string s = to_string(x);
        std::reverse(s.begin(),s.end());
        string cpy = s;
        if(stoll(s) > 2147483647) return 0;
        if(n) return -1*stoi(s);
        return stoi(s);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)