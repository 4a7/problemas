x = input().split()
a = int(x[0])
b = int(x[1])

d = []

def second(x):
    return x[1]

while(b):
    b-=1
    x = input().split()
    k = int(x[0])
    m = int(x[1])
    d.append((k, m))

d = sorted(d, key=second, reverse=True)
#print(d)
res = 0
for x in d:
    #print(a)
    if(a-x[0] >= 0):
        res += x[1]*x[0]
        a-=x[0]
    else:  
        res += x[1]*a
        break
        
print(res)