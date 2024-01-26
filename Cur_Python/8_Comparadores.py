x=int(input("Ingrese el primer valor: "))
y=int(input("Ingrse el segundo valor: "))

if(x>y and x>=50):
    print("Como x>y y x>=50 la suma de ambos números es:",x+y)
elif(x<y or x<0):
    print("Como x<y la resta de ambos números es:",x-y)
else:
    print("Los números son iguales.")
