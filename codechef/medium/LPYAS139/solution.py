def calculate_power(base, exponent):
    #write your code here
    return base**exponent
    
def main():
    base, exponent = map(int, input().split())
    result = calculate_power(base, exponent)
    print(result)


main()
