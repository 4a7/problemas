n = int(input())
s = input()
res = ""

for x in range(n-1, -1, -2):
    res = s[x] + res

i = 1 if n%2 else 0

for x in range(i, n, 2):
    res = s[x] + res
    
print(res)
