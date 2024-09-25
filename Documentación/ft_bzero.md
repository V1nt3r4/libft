La función bzero es muy similar a memset, pero está diseñada específicamente para poner a cero (es decir, llenar con ceros) una porción de memoria. Se utiliza para inicializar o "vaciar" un bloque de memoria, llenándolo todo con ceros.

**PSEUDOCÓDIGO DE BZERO**

```
Función bzero(puntero, tamaño):
    Para cada posición en la memoria desde el puntero hasta (puntero + tamaño - 1) :
    Colaca un 0 en usa posición 
    Fin de la función.

```
**EXPLICACIÓN PASO O PASO**

 - Recibe dos parámetros:

 -- puntero: *Señala el inicio del bloque de memoria que queremos llenar de ceros.*

 -- tamaño: *La cantidad de casillas(o bytes) que queremos llenar con ceros.*

  - Para cada posición de memoria:

  -- Comenzamos desde el punto al que puntero está señalando, que es la primera casilla de memoria.

  -- Nos movemos de casilla en casilla, avanzando hacia la siguiente, y en cada una podemos un 0.

 - Repite hasta llenar todas las casillas:

El ciclo continúa hasta que hayamos llenado tantas casilla de memoria a partir de una dirección específica, poniendo un cero un cero 

En términos simples, bzero recorre cada casilla de memoria a partir de una dirección específica, poniendo un cero en cada termino hasta que haya llenado tantas casillas como el tamaño especificado.

 - EJEMPLOS CON PALABRAS SIMPLES:

 imagina que tienes una fila de 5 casillas vacías y la función bzero las llena todas con ceros:

  - Antes de bzero: [_, _, _, _,]

  - Después de bzero: [0, 0, 0, 0]
----------------------------------------------------------------------------------------------------------------------------------


**PROTOTIPO DE LA FUNCIÓN**

```
void ft_bzero(void *s, size_t n)

```

**DESCRIPCIÓN** 

*La función ft_bzero llena los primeros n bytes del área de memoria apuntada por 's' con ceros (0). Es una función util para inicalizar bloques de memoria, asegurando que estén llenos de ceros.*

**PARÁMETROS**
 
 - s: Un puntero al área de memoria que se debe inicializar a cero.
 - n: El número de bytes que se deben poner a cero.

**VALOR DE RETORNO**

 - ft_bzero no retorna ningún valor, ya que es una función void.

**FUNCIONAMIENTO BÁSICO**

 *La función ft_bzero es esencialmente una forma específica de ft_memset , donde se llama a ft_memset con el valor 0 para inicializar la memoria. Su implementación establece los primeros n bytes del área de memoria apuntada por s en cero.*

 **EJEMPLO DE USO**

 ```
 #include <stdio.h>
 #include <string.h>

 void ft_bzero(void *s, size_t n);

 int main(void)
 {
    char str[50] = "HOLA, MUNDO!";
    printf("Antes de b_zero: %s\n", str);

    ft_zero(str + 5, 6);
    printf("Después de bzero: %s\n", str);

    return 0;
 }
 
 ```