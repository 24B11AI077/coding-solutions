# Defuse the Bomb

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You have a bomb to defuse, and your time is running out! Your informer will provide you with a  **circular**  array `code` of length of `n` and a key `k`.

To decrypt the code, you must replace every number. All the numbers are replaced  **simultaneously**.

- If k > 0, replace the ith number with the sum of the next k numbers.
- If k < 0, replace the ith number with the sum of the previous -k numbers.
- If k == 0, replace the ith number with 0.

As `code` is circular, the next element of `code[n-1]` is `code[0]`, and the previous element of `code[0]` is `code[n-1]`.

Given the  **circular**  array `code` and an integer key `k`, return  *the decrypted code to defuse the bomb* !

 

 **Example 1:** 

```
Input: code = [5,7,1,4], k = 3
Output: [12,10,16,13]
Explanation: Each number is replaced by the sum of the next 3 numbers. The decrypted code is [7+1+4, 1+4+5, 4+5+7, 5+7+1]. Notice that the numbers wrap around.

```

 **Example 2:** 

```
Input: code = [1,2,3,4], k = 0
Output: [0,0,0,0]
Explanation: When k is zero, the numbers are replaced by 0. 

```

 **Example 3:** 

```
Input: code = [2,4,9,3], k = -2
Output: [12,5,6,13]
Explanation: The decrypted code is [3+9, 2+3, 4+2, 9+4]. Notice that the numbers wrap around again. If k is negative, the sum is of the previous numbers.

```

 

 **Constraints:** 

- n == code.length
- 1 <= n <= 100
- 1 <= code[i] <= 100
- -(n - 1) <= k <= n - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.6 MB (beats 51.41%)  
**Submitted:** 2026-08-08T08:42:05.012Z  

```cpp
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n,0);
        if( k == 0) return res;
        int i ;
        int cpy = k;
        int sum = 0;
        if(cpy > 0){
            i = 1;
            while(i < code.size() && cpy> 0){
            sum+=code[i];
            cpy--;
            i++;
            if(i == code.size()) i = 0;
        }

        int j = 1;
        int size = code.size();
        int k = 0;
        while(j < code.size() && size > 0){
            res[k++] = sum;
            sum -= code[j];j++;
            sum+= code[i];i++;
            if(i == code.size()) i =0 ;
            if(j == code.size()) j = 0;
            size--;
        }
        }
        else {
            i = n-1;
             while(i >= 0 && cpy < 0){
            sum+=code[i];
            cpy++;
            i--;
            if(i ==-1) i = n-1;
        }
        if(i+1 == n) i = 0;
        else i += 1; 

        cout << sum;
        int j = 0;
        int size = code.size();
        int k = 0;
        while(j < n && size > 0){
            res[k++] = sum;
            sum -= code[i];i++;
            sum+= code[j];j++;
            if(i == n) i =0 ;
            if(j == n) j =0;
            size--;
        }
        }
        
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/defuse-the-bomb/)