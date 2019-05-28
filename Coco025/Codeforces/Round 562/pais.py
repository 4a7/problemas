n, m = [int(x) for x in input().split()]

n2 = n + 1
sets = []
while(n2):
    n2 -= 1
    s = set()
    sets.append(s)

i = 1
m2 = m
while(m2):
    m2 -= 1
    a, b = [int(x) for x in input().split()]
    sets[a].add(i)
    sets[b].add(i)
    i += 1

res = sorted(sets, key=len, reverse=True)

def main():
    for x in range(0, len(res)):
        for y in range(x+1, len(res)):
            if(len(sets[x]|sets[y]) == m):
                print("YES")
                return
    print("NO")

main()
