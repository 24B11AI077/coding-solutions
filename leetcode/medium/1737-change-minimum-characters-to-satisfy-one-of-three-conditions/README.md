# Change Minimum Characters to Satisfy One of Three Conditions

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two strings `a` and `b` that consist of lowercase letters. In one operation, you can change any character in `a` or `b` to  **any lowercase letter**.

Your goal is to satisfy  **one**  of the following three conditions:

- Every letter in a is strictly less than every letter in b in the alphabet.
- Every letter in b is strictly less than every letter in a in the alphabet.
- Both a and b consist of only one distinct letter.

Return  *the  **minimum**  number of operations needed to achieve your goal.* 

 

 **Example 1:** 

```
Input: a = "aba", b = "caa"
Output: 2
Explanation: Consider the best way to make each condition true:
1) Change b to "ccc" in 2 operations, then every letter in a is less than every letter in b.
2) Change a to "bbb" and b to "aaa" in 3 operations, then every letter in b is less than every letter in a.
3) Change a to "aaa" and b to "aaa" in 2 operations, then a and b consist of one distinct letter.
The best way was done in 2 operations (either condition 1 or condition 3).

```

 **Example 2:** 

```
Input: a = "dabadd", b = "cda"
Output: 3
Explanation: The best way is to make condition 1 true by changing b to "eee".

```

 

 **Constraints:** 

- 1 <= a.length, b.length <= 105
- a and b consist only of lowercase letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-08-17T06:07:09.556Z  

```cpp
class Solution {
public:
    int minCharacters(string a, string b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int pos1 = 0 , pos2 = 0 ,pos3 = 0;
        int left = a.size()-1,right = b.size()-1;
        while( left >= 0 && a[left] >= b[0] ){
            left--;
        }
         pos1 = a.size()-1 - left;
        left = a.size()-1;right = b.size()-1;
         while(  right >= 0 && b[right] >= a[0] ){
           right--;
        }
         pos2 = b.size()-1-right;
        unordered_map<char,int> mp;
        int cnt = 0;
        bool found1 = false, found = false;
        int max1 = 0;
        char ch1 = '.';
        for(int i = 0; i < a.size(); i++){
            mp[a[i]]++;
            if(mp[a[i]] > max1){
                max1 = mp[a[i]];ch1 = a[i];
            }
        }int dis = 0;
        for(int i = 0; i < a.size() ; i++){
            if(a[i] != ch1) dis += 1;
        }
        unordered_map<char,int> mp1;
        int max2 = 0;char ch2 = '.';
        for(int i = 0; i < b.size(); i++){
            mp1[b[i]] += 1;
            if(mp1[b[i]] > max2){
                max2 = mp1[b[i]];ch2 = b[i];
            }
        }
        int dis2 = 0;
        for(int i = 0; i < b.size() ; i++){
            if(b[i] != ch2) dis2 +=1;
        }
        pos3 = dis+dis2;
        return min(pos1,min(pos2,pos3));
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/change-minimum-characters-to-satisfy-one-of-three-conditions/)