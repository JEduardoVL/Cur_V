x=float(input("Ingrse el primer número = "))
y=float(int((input("Ingrse el segundo número = "))))

LINEA= "="*70

print(" Menú")
print("1]Suma")
print("2]Resta")
print("3]Multiplicación")
print("4]División")

print(LINEA)

op=int(input("Ingrese la opción deseada: "))

if(op==1):
    suma = x + y
    print("El resultado de la suma de los valores "+str(x)+" y "+str(y)+ " es de: ",suma)
elif(op==2):
    resta = x - y
    print("El resultado de la resta de los valores "+str(x)+" y "+str(y)+ " es de: ",resta)
elif(op==3):
    multiplicacion = x * y
    print("El resultado de la multiplicación de los valores "+str(x)+" y "+str(y)+ " es de: ",multiplicacion)
elif op == 4:
    if y != 0:
        division = x / y
        print("El resultado de la división de los valores " + str(x) + " y " + str(y) + " es de: ", division)
    else:
        print("Error: No se puede dividir por cero.")
else:
    print("La opción no ingresada no es valida")