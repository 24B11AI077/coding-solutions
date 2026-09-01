# cook your dish here
x,y,z = map(int,input().split())

if x < y and y < z :
    print("Increasing")
elif x > y and y > z:
    print("Decreasing")
else :
    print("Neither")