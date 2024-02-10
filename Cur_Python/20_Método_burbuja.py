def ascendente(vector):
    leng=len(vector)-1
    for i in range(0,leng):
        for j in range(0,leng):
            if vector[j]>vector[j+1]:
                aux=vector[j]
                vector[j]=vector[j+1]
                vector[j+1]=aux
    print("Forma ascendente:")
    print(vector)

def descendente(vector):
    leng=len(vector)-1
    for i in range(0,leng):
        for j in range(0,leng):
            if vector[j]<vector[j+1]:
                aux=vector[j]
                vector[j]=vector[j+1]
                vector[j+1]=aux
    print("Forma descendente:")
    print(vector)

vector=[]
x=int(input("Ingrse la cantidad de valores: "))
for i in range(x):
    y=int(input("Ingrse el valor: "))
    vector.append(y)

print(vector)

ascendente(vector)
descendente(vector)