n = int(input())
s = input()

res = ""
for x in range(n-1, -1, -2):
    #print(1, x)
    res += s[x]
i = 1
if(n%2 == 0):
    i = 0
for x in range(i, n, 2):
    #print(2, x)
    res += s[x]

print(res[::-1])





