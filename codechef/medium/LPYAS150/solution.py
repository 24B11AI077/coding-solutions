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
