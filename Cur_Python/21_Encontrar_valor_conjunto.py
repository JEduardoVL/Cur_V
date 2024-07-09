lista = []

n= int(input("Ingrese la cantidad de valores que tednra la lista: "))
xc = int(input("Ingrese el valor a buscar: "))
vector = []

for i  in range(n):
    nc = int(input("Ingrese el valor al conjunto: "))
    lista.append(nc)
    if nc == xc:
        vector.append("El valor de x:" + str(xc)+" esta en el cunto en la posicion " +str(i+1))

print(vector)