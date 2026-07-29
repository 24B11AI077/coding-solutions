# Sum of Square Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a non-negative integer `c`, decide whether there're two integers `a` and `b` such that `a2 + b2 = c`.

 

 **Example 1:** 

```
Input: c = 5
Output: true
Explanation: 1  *1 + 2*  2 = 5

```

 **Example 2:** 

```
Input: c = 3
Output: false

```

 

 **Constraints:** 

- 0 <= c <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 3 ms  
**Memory:** 7.8 MB  
**Submitted:** 2026-07-29T08:47:25.124Z  

```cpp
class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i = 0;i <= (2^32-1); i++ ){
            for(int j = 0;j <= (2^32-1); j++ ){
                cout << ((i*i)+(j*j)) << '\n';
                if(((i*i)+(j*j)) == c) {
                    return true;
                }
                if((i*i)+(j*j) > c) break;
            }
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sum-of-square-numbers/)