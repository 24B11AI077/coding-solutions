# Zigzag Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

```
P   A   H   N
A P L S I I G
Y   I   R

```

And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows:

```
string convert(string s, int numRows);

```

 

 **Example 1:** 

```
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

```

 **Example 2:** 

```
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I

```

 **Example 3:** 

```
Input: s = "A", numRows = 1
Output: "A"

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consists of English letters (lower-case and upper-case), ',' and '.'.
- 1 <= numRows <= 1000

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 85.07%)  
**Memory:** 14.4 MB (beats 17.97%)  
**Submitted:** 2026-08-12T04:20:34.354Z  

```cpp
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string res = "";
        vector<string> str(numRows,"");
        int k = 0;
        bool f = true, r = false;
        for(int i = 0; i < s.size(); i++){
            if(f){
                str[k].push_back(s[i]);
            k++;
            if(k == numRows){
                k-=2;
                r = true; f = false;
            }
            }
            else if(r){
                str[k].push_back(s[i]);
                k--;
                if(k == -1){
                     k+=2;f = true, r = false;
                }

            }
        }
        for(string val : str){
            res += val;
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/zigzag-conversion/)