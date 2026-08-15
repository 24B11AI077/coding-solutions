# Minimize Result by Adding Parentheses to Expression

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a  **0-indexed**  string `expression` of the form `"<num1>+<num2>"` where `<num1>` and `<num2>` represent positive integers.

Add a pair of parentheses to `expression` such that after the addition of parentheses, `expression` is a  **valid**  mathematical expression and evaluates to the  **smallest**  possible value. The left parenthesis  **must**  be added to the left of `'+'` and the right parenthesis  **must**  be added to the right of `'+'`.

Return `expression` *after adding a pair of parentheses such that* `expression` *evaluates to the  **smallest**  possible value.*  If there are multiple answers that yield the same result, return any of them.

The input has been generated such that the original value of `expression`, and the value of `expression` after adding any pair of parentheses that meets the requirements fits within a signed 32-bit integer.

 

 **Example 1:** 

```
Input: expression = "247+38"
Output: "2(47+38)"
Explanation: The expression evaluates to 2  *(47 + 38) = 2*  85 = 170.
Note that "2(4)7+38" is invalid because the right parenthesis must be to the right of the '+'.
It can be shown that 170 is the smallest possible value.

```

 **Example 2:** 

```
Input: expression = "12+34"
Output: "1(2+3)4"
Explanation: The expression evaluates to 1  *(2 + 3)*  4 = 1  *5*  4 = 20.

```

 **Example 3:** 

```
Input: expression = "999+999"
Output: "(999+999)"
Explanation: The expression evaluates to 999 + 999 = 1998.

```

 

 **Constraints:** 

- 3 <= expression.length <= 10
- expression consists of digits from '1' to '9' and '+'.
- expression starts and ends with digits.
- expression contains exactly one '+'.
- The original value of expression, and the value of expression after adding any pair of parentheses that meets the requirements fits within a signed 32-bit integer.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.1 MB (beats 53.85%)  
**Submitted:** 2026-08-15T13:56:10.917Z  

```cpp
class Solution {
public:
    string minimizeResult(string exp) {
        int n = exp.size();
        int pidx = 0;
        for(int i = 0; i < n; i++){
            if(exp[i] == '+'){
                pidx = i;break;
            }
        }
        string num1 = exp.substr(0,pidx);
        string num2 = exp.substr(pidx+1);
        int bl = 0, br = 0;
        int a = 1, d = 1;
        int mini = INT_MAX;
        string res = "";
        for(int bl = 0; bl < num1.size() ; bl++){
            string sub1 = num1.substr(bl);
            int val1 = stoi(sub1);
            if(bl == 0) a = 1;
            else a = stoi(num1.substr(0,bl));
            for(int br = 0;br < num2.size() ; br++){
                string sub2 = num2.substr(0,br+1);
                int val2 = stoi(sub2);
                if(br == num2.size()-1) d = 1;
                else d = stoi(num2.substr(br+1));
                int val = a*(val1+val2)*d;
                if(val < mini){
                    res = "";
                    res += num1.substr(0,bl) + '(' + sub1 + '+' + sub2 + ')' + num2.substr(br+1);
                }
                mini = min(mini,val);
            }
        }
        return res;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/minimize-result-by-adding-parentheses-to-expression/)