nombre=(input("Ingrese el nombre del cliente: "))
productos=int((input("Ingrse la cantidad de productos: ")))
precio=float((input("Ingrse el precio de los productos: ")))
LINEA="=" *70

cancelar=productos * precio

print()
print(LINEA)
print()

print("Nombre del cliente:", nombre)
print("Cantidad de productos:",productos)
print("Precio de unidad:",precio)
print(LINEA)
print("Monto a cancelar:",cancelar)



