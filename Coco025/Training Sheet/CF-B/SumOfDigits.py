a = input()
if(len(a) == 1):
    print(0)
else:
    res = 0
    x = 999 
    while(x >= 10):
        x = 0
        for t in a:
            x += int(t)
        a = str(x)
        res += 1
    print(res)