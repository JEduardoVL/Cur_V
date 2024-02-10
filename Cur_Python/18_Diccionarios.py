mi_diccionario={'nombre':'eduardo','apellido':'valerio','edad':'20'}

print(mi_diccionario)
print(mi_diccionario['nombre'])

print(mi_diccionario.keys()) #Inprime solo los keys

print(mi_diccionario.values()) #Inprime solo los valores

mi_diccionario['nombre']='Jose' #Editar un valor
mi_diccionario.setdefault('plataforma','udemy') #Agrega un valor

print(mi_diccionario)

mi_diccionario.pop('edad') #Eliminar un valor
mi_diccionario.get('nombre') #Toma del valor
print(mi_diccionario)

mi_diccionario.clear() #Elimina todos lo valores
print(mi_diccionario)