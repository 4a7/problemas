lista = ["R", "O","Y","G","B","I","V"]

n  = int(input())
res = ""
p = 0
while(n):
    n-= 1
    res += lista[p%7]
    p+=1
print(res)