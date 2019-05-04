n = int(input())

words = []
while(n):
    n -= 1
    w = input()
    words.append(w)

for w in words:
    w = "#" + w + "#"
    w1 = set()
    #w1.add(w)
    s = len(w)
    c = 1
    fine = True
    while(c < s-1):
        if(abs(ord(w[c]) - ord(w[c+1])) == 1 or abs(ord(w[c]) - ord(w[c-1])) == 1):
            #print("Problema con: ", w[c])
            k = w[c]
            fine = False
            #print("C: ", c, "S: ", s-1)
            for t in range(c+1, s-1):
                #print("T:", t)
                if(abs(ord(k) - ord(w[t])) != 1 and abs(ord(k) - ord(w[t+1])) != 1):
                    #print(t, c)
                    r1 = w[:c]
                    r2 = w[c+1:t+1]
                    r3 = w[t+1:]
                    #print("R:", r1, r2, r3)
                    w = r1 + r2 + k + r3
                    fine = True
                    break
            #print("Encontró a la derecha: ", fine, w)

            if(not fine):
                #print(c)
                for t in range(c-1, 0, -1):
                #    print("T: ", t)
                    if(abs(ord(k) - ord(w[t])) != 1 and abs(ord(k) - ord(w[t-1])) != 1):
                        r1 = w[:t]
                        r2 = w[t:c]
                        r3 = w[c+1:]
                        #print(r1, r2, r3)
                        w = r1 + k + r2 + r3
                        fine = True
                        break
                #print("Encontró a la izquierda: ", fine, w)    
            
            if((w, c) in w1):
                fine = False
                break

            if(fine):
                w1.add((w, c))
                c = 0

        c += 1

    if(fine):
        print(w[1:-1])
    else:
        print("No answer")
        