g = {}
g[1] = [6,7]
g[2] = [3,7]
g[3] = [4,7,2,6]
g[4] = [3,7]
g[5] = [7]
g[6] = [1,3]
g[7] = [1,2,3,4,5]


est=[]
def estavel(y):
    x = []
    h = [True,False,False,False,False,False,False]
    for a in y.keys():
        while y[a] != 0:
            if len(y[a])== 1:
                x.append(y)
                h[a] = True
    return x
estavel(g)

print(est)
    
