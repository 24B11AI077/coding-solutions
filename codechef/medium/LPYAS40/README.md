# LPYAS40

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program to print the length of each word of the sentence given below as well as the length of the whole sentence.
 **"Coding on CodeChef"** 

#### Note:

There is spacing between the words and the number, consider it while printing the outputs.

 **Note:**  Please print the outputs in the same format as given below.

### Output Format

Coding - 6
on - 2
CodeChef - 8
Coding on CodeChef - 18

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-01T15:18:46.662Z  

```py
# cook your dish here
val = "Coding on CodeChef"
res = ""
for i in range(len(val)):
    if val[i] == ' ':
        print(res + " - " + str(len(res)))
        res = ""
    else :
        res += val[i]
print(res + " - " + str(len(res)))

print(val + " - " + str(len(val)))
```

---

[View on CodeChef](https://www.codechef.com/problems/LPYAS40)