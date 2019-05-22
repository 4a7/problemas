s = input()
L = 0
U = 0
for c in s:
    if(c.isupper()):
        U += 1
    else:
        L += 1

if(U > L):
    print(s.upper())
elif (L >= U):
    print(s.lower())