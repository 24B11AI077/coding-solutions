# Count Vowel Substrings of a String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A  **substring**  is a contiguous (non-empty) sequence of characters within a string.

A  **vowel substring**  is a substring that  **only**  consists of vowels (`'a'`, `'e'`, `'i'`, `'o'`, and `'u'`) and has  **all five**  vowels present in it.

Given a string `word`, return  *the number of  **vowel substrings**  in*  `word`.

 

 **Example 1:** 

```
Input: word = "aeiouu"
Output: 2
Explanation: The vowel substrings of word are as follows (underlined):
- "aeiouu"
- "aeiouu"

```

 **Example 2:** 

```
Input: word = "unicornarihan"
Output: 0
Explanation: Not all 5 vowels are present, so there are no vowel substrings.

```

 **Example 3:** 

```
Input: word = "cuaieuouac"
Output: 7
Explanation: The vowel substrings of word are as follows (underlined):
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"
- "cuaieuouac"

```

 

 **Constraints:** 

- 1 <= word.length <= 100
- word consists of lowercase English letters only.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 66.75%)  
**Memory:** 8.5 MB (beats 73.83%)  
**Submitted:** 2026-08-03T06:21:09.472Z  

```cpp
class Solution {
public:
    int countVowelSubstrings(string s) {
        int count = 0;
        unordered_map<char,int> mp;
        for(int i = 0; i < s.size(); i++){
            mp['a'] = -1;mp['e']=-1;mp['i']=-1;mp['o']=-1;mp['u']=-1;
            int cnt = 0;
            for(int j = i; j < s.size(); j++){
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                    mp[s[j]]+=1;
                if(mp[s[j]] == 0) cnt++;
                }
                else break;
                
                if(cnt >= 5) count++;
            }
            
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-vowel-substrings-of-a-string/)