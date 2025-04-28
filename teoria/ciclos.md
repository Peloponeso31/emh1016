# Ciclos e iteraciones

## Definiciones
- __Iteracion:__ Conjunto de una serie de fenómenos u operaciones que se repiten ordenadamente.


## Ciclos representados en lenguaje C
### Ciclo `for (;;)`
La sintaxis del ciclo for es la siguiente:
```c
for (int variable = 0; variable < 3; variable++)
{
    // Operaciones a realizar...
}
```

Observamos que dentro del parentesis hay 3 `;`. Recordemos que estos simbolizan el final de una instruccion. Por defecto, el ciclo for acepta 3 instrucciones las cuales representan lo siguiente:
- __Definicion de una variable de control:__ Esta se utilizara y operara en el ciclo for.
- __Condicion de ejecucion:__ La condicion bajo la cual el ciclo seguira iterando siempre y cuando sea verdadera.
- __Operacion sobre la variable de control:__ Operacion que se aplicara sobre la variable de control, esta puede ser in incremento, decremento u operaciones sobre punteros.

Ejemplo de un ciclo for:
```c
// Este ciclo for imprime todos los numeros pares de el 0 al 20.
for (int numero = 0; numero < 21; numero += 2)
{
    printf("%d\n", numero);
}
```

### Ciclo `while()`
La sintaxis es la siguiente:
```c
char * nombre = "Pedro";
int condicion = nombre == "Hugo";
while (condicion)
{
    // Se realizan operaciones...
    // Dada la anterior condicion, este ciclo no hara nada.
}
```

Mismo ejemplo anterior, pero con un ciclo while:
```c
int numero = 0;
while (numero < 21)
{
    numero += 2;
    printf("%d\n", numero);
}
```

Este ciclo se ejecutara mientras la condicion sea verdadera, cuando sea falsa, este parara.
El uso habitual de este es cuando se necesitan hacer operaciones pero no sabemos el numero de iteraciones que tomara.

### Ciclo `do {} while()`
La sintaxis es la siguiente:
```c
char * nombre = "Pedro";
int condicion = nombre == "Hugo";
do
{
    // El ciclo do-while hace las operaciones especificadas una vez, y luego realiza las
    // iteraciones mientras la condicion que se realice sea verdadera.

    // Dada la condicion, solo iterara una vez.
}
while (condicion);
```


