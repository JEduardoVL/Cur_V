def calculo(sumatoria):
    op=int(input("Ingrese 1 para ingresar. "))
    while(op==1):
        for i in range(1,sumatoria+1):
            print(i*sumatoria)
        op=int(input("Ingrese 1 para repetir. "))

def suma(a,b):
    return a+b
x=int(input("Ingrese el primer valor: "))
y=int(input("Ingrse el segundo valor: "))

sumatoria=suma(x,y)

print("Valor a utilizar:",sumatoria)

calculo(sumatoria)