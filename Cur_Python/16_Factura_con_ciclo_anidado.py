cliente = input("Ingrse 'si' para facturar un cliente: ")

while(cliente =="si" or cliente == "SI" or cliente=="Si" or cliente=="sI"):
    contador=0
    acumulador =0
    nombre= input("Ingrese el nombre del cliente: ")
    cantidad= int(input("Ingrse la cantidad de productos a llevar: "))

    for i in range(cantidad):
        contador +=1
        print("Precio del articulo número:", contador)
        precio=float(input("Ingrese precio: "))
        acumulador+=precio
    print("Monto total a cancelar: ", acumulador)
    cliente= input("Ingrse 'si' para facturar a otro cliente: ")

print("Programa terminado. ")

