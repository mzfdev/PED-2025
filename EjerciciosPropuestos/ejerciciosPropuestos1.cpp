/*
*************Ejercicios propuestos basicos*************

1. Crea un programa que:
    - Genere un arreglo de 20 números aleatorios entre 1 y 100.
    - Implemente funciones para:
        - Contar cuántos son pares e impares.
        - Encontrar el segundo mayor y el segundo menor.
        - Invertir el arreglo (sin usar otro arreglo auxiliar).

2. Suma de vectores
    - Crea dos arreglos de tamaño n.
    - Implementa funciones para:
        - Llenar ambos arreglos con números enteros.
        - Calcular la suma elemento a elemento en un tercer arreglo.
        - Calcular el producto escalar de los dos vectores.

3. Matrices y funciones
    - Trabaja con una matriz estática de 5x5.
    - Implementa funciones que:
        - Llenen la matriz con números aleatorios.
        - Calculen la suma de cada fila y de cada columna.
        - Encuentren la fila con la mayor suma.
        - Trasponer la matriz.

4. Cadenas con funciones y arrays
Trabaja con char[] (no con string).
    - Implementa funciones que:
        - Verifiquen si una cadena es un palíndromo.
        - Conviertan todas las letras a mayúsculas.
        - Cuenten cuántas vocales y consonantes tiene.

5. Structs básicos
Crea un struct Estudiante que almacene: nombre, edad y promedio.
    - Pide al usuario los datos de 3 estudiantes.
    - Imprime cuál tiene el mejor promedio.

6. Funciones con structs
Modifica el ejercicio anterior:
    -Implementa una función leerEstudiante() que devuelva un Estudiante.
    -Implementa una función mejorPromedio() que reciba un arreglo de estudiantes y retorne el índice del mejor.

7. Arreglo estático
    - Declara un arreglo estático de enteros de tamaño 10.
    - Llénalo con valores aleatorios entre 1 y 100.
    - Implementa funciones para:
        - Encontrar el máximo.
        - Encontrar el mínimo.
        - Calcular el promedio.

8. Punteros simples (introducción)
    - Declara un entero x y un puntero px que apunte a él.
    - Muestra la dirección de memoria y el valor de x usando el puntero.
    - Modifica el valor de x a través de px y muestra el nuevo valor.

9. Punteros con arreglos estáticos
    - Declara un arreglo estático de 5 enteros.
    - Usa un puntero para recorrer el arreglo y mostrar todos los elementos.
    - Calcula la suma usando el puntero en vez de índices.

10. Array dinámico
    - Solicita al usuario cuántos números quiere ingresar.
    - Reserva memoria dinámica (new) para un arreglo de ese tamaño.
    - Pide al usuario los valores y calcula: suma, promedio y número mayor.
    - Libera la memoria (delete[]).

11. Struct + array dinámico
    - Crea un struct Producto con: código, nombre y precio.
    - Pregunta al usuario cuántos productos desea registrar.
    - Reserva memoria dinámica para ese número de productos.
    - Implementa funciones para:
        - Leer los productos.
        - Mostrar todos los productos.
        - Encontrar el más caro.

12. Matrices con punteros dobles (extra de reto)
    - Crea una matriz dinámica de n x m enteros (usando punteros dobles).
    - Llénala con valores aleatorios entre 1 y 50.
    - Implementa una función que calcule la suma de cada fila y la imprima.
    - Libera la memoria al final.

******Ejercicios avanzados**********

1. Sistema de gestión de inventario
Crea un programa que maneje productos con un struct Producto que tenga:
id, nombre, precio, cantidad.
El programa debe:
    - Usar un arreglo dinámico de productos.
    - Permitir:
        - Agregar productos.
        - Buscar por id.
        - Actualizar la cantidad.
        - Calcular el valor total del inventario.

2. Agenda de contactos (uso de punteros a structs)
    - Crea un struct Contacto con: nombre, teléfono, correo.
    - Usa un puntero a puntero (Contacto**) para manejar una lista dinámica de contactos.
    - Implementa funciones para:
    - Agregar un nuevo contacto.
    - Mostrar todos los contactos.
    - Buscar un contacto por nombre.
    - Eliminar un contacto (liberar memoria y reacomodar la lista).

3. Matriz dinámica con operaciones
    - Crea una matriz cuadrada dinámica de n x n.
    - Implementa funciones que permitan:
    - Llenarla con valores aleatorios.
    - Calcular la suma de la diagonal principal y secundaria.
    - Transponer la matriz.
    - Liberar memoria.

4. Registro de estudiantes con ordenamiento
    - Crea un struct Estudiante con: carnet, nombre, promedio.
    - Usa un arreglo dinámico de estudiantes.
    - Implementa funciones para:
    - Ingresar estudiantes.
    - Ordenarlos por promedio (usando punteros y algoritmo burbuja o selección).
    - Mostrar el estudiante con mejor y peor promedio.

5. Banco (simulación simple con structs y funciones)
    - Crea un struct Cuenta con: numeroCuenta, nombreTitular, saldo.
    - El programa debe:
    - Usar un arreglo dinámico de cuentas.
    - Permitir:
    - Depositar dinero.
    - Retirar dinero (con validación de fondos).
    - Transferir entre cuentas.
    - Mostrar el saldo total del banco.
*/