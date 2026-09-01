values = list(map(int, input().split()))
# Update your code below this line
for nums in values:
    if nums > 10:
        continue
    print(nums**2)