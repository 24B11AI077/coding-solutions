# LPYAS150

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program that first accepts the number of test cases  **t**. For each test case, read an integer  **num**. Check if  **num**  is even using the  **isEven**  function. If  **num**  is even, output "Even"; otherwise, output "Odd".

### Sample 1:
Input
Output

```
3
2
6
5
```

```
Even
Even
Odd
```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-01T15:41:50.909Z  

```py
def is_even(num):
    # Complete the function 
    if num%2 == 0:
        return "Even"
    return "Odd"

def main():
    # Complete the function 
    t = int(input())
    while t:
        val = int(input())
        res = is_even(val)
        print(res)
        t -= 1

if __name__ == "__main__":
    main()

```

---

[View on CodeChef](https://www.codechef.com/problems/LPYAS150)