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