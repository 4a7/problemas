
def checkGrupo(grupos, valores, D):
    grupo = []
    for x in range(len(grupos)):
        if(grupos[x] == True):
            grupo.append(valores[x])
            gTemp = grupo
            if(max(gTemp) - min(gTemp) <= D):
                grupo = gTemp
        if(len(grupo) == 3):
            break
    return (len(grupo) == 3, grupo)


#print(checkGrupo([True]*5, [1,2,3,4,5],  10))

import math
n = pow(10, 15)
phi = (1 + math.sqrt(5)) / 2; 
print(phi)
print(pow(phi, n) / math.sqrt(5))