lista = []
acumulador = 0
contador = 0
menor = 1000
cedulamenor = 0
nombremenor= ""

menores = 0

edadesregistradas = 0
edadregistro = 0


#INicio de programa
x= int(input("Ingrese la cantidad de alumnos que requiera registrar :"))

for i in range(x):
    nombre=input("Ingrese nombre: ")
    cedula= int(input("Ingrese la identificacion del estudiante: "))
    edad = int(input("Ingrese la edad "))
    seccion = int(input("Ingrese la seccion del estudiante: "))
    acumulador+= edad
    contador += 1
    
    promedio = acumulador / contador
    
    if edad <menor:
        menor = edad
        cedulamenor = cedula
        nombremenor = nombre

    if edad <promedio:
        menores += 1
        
    if edad != edadregistro:
        edadregistro = edad
        edadesregistradas += 1
        lista.append(edad)
print("Edad media de la seccion " + str(promedio))
print(nombremenor, " ", cedulamenor, " es el menor de todos con: ", menor, "de edad")
print("Cantidad de alumnos cuya edad es menor que el promedio: ",menores)

print(lista)
