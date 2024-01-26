cantidad=int(input("Ingrese la cantidad de productos: "))
precio=float(input("Ingrese el precio: "))

pagar=cantidad*precio

LINEA = "="*70
if(cantidad>=11 and cantidad<=20):
    final=pagar * 0.80
    print("El valor final es de:",final)
elif(cantidad>=10):
    final=pagar * 0.90
    print("El valor final es de:",final)
else:
    print("El cliente no tiene descuentos y pagará:",pagar)