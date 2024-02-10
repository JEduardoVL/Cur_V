lista=["hola","mundo"]
print(lista)

print(lista[0],lista[1])

lista_enteros=[1,2,3,4,5,6,7,8,9,10]
print(lista_enteros)

enteros=[]
acumulador=0
x=int(input("Ingrse la cantidad de valores en la lista: "))

for i in range(x):
    y=int(input("Ingrse el valor: "))
    acumulador+=y
    enteros.append(y)
print(enteros)
print("Acumulador:",acumulador)