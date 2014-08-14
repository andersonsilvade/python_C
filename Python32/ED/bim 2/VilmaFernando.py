def retirar(v, grupos, i):


        if i in v:
            for a in grupos[i]:
                if a in v:
                    v.remove(a)

        return v


       
v ={1,2,3,4,5,6,7}
grupos={1:[6,7], 2:[3,7], 3:[2,4,6,7],
          4:[3,7], 5:[7],6:[1,3], 7:[1,2,3,4,5]}
sorted 
for i in grupos:
    v = retirar(v, grupos, i)


print (v)
