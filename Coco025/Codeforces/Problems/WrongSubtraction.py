a,b = input().split()
b = int(b)
n = len(a)
while(b):
    b -= 1
    if(a[-1] != '0'):
        a = a[:n-1] + str(int(a[-1])-1)
    else:
        a = a[:n-1]
        n -= 1
    if(a == ""):
        a = "0"
        break
print(a)