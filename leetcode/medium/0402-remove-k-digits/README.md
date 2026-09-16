# Remove K Digits

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given string num representing a non-negative integer `num`, and an integer `k`, return  *the smallest possible integer after removing*  `k`  *digits from*  `num`.

 

 **Example 1:** 

```
Input: num = "1432219", k = 3
Output: "1219"
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.

```

 **Example 2:** 

```
Input: num = "10200", k = 1
Output: "200"
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.

```

 **Example 3:** 

```
Input: num = "10", k = 2
Output: "0"
Explanation: Remove all the digits from the number and it is left with nothing which is 0.

```

 

 **Constraints:** 

- 1 <= k <= num.length <= 105
- num consists of only digits.
- num does not have any leading zeros except for the zero itself.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.8 MB  
**Submitted:** 2026-09-16T04:57:35.774Z  

```cpp
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size() == k) return "0";
        stack<char> st;
        for(int val : num){
            while(!st.empty() && st.top() > val && k > 0 ){
                st.pop();
                k--;
            }
            st.push(val);
        }
        while(k > 0 ){
            st.pop();
            k--;
        }
        string res = "";
        while(!st.empty()){
            res = st.top()+ res;
            st.pop();
        }
        if(res.size() == 1) return res;
        string fin = "";
        bool found = false;
        for(int i = 0; i < res.size(); i++){
            if(res[i] > '0'){
                found = true;
            }
            if(!found){
                continue;
            }
            fin += res[i] ;
        }
        return fin;
    }
};
//1111219 - k =3
```

---

[View on LeetCode](https://leetcode.com/problems/remove-k-digits/)