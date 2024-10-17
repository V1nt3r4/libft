# STRNCMP
## Prototipo
``` int	ft_strncmp(const char *s1, const char *s2, size_t n) ```

## Filosofemos 
Imagina que strncmp es como un juez imparcial en una competición de cadenas. Este juez compara dos cadenas de texto hasta un cierto número de caracteres y decide si son iguales, cuál es mayor o cuál es menor.

**¿Qué hace strncmp?** 
strncmp compara los primeros n caracteres de dos cadenas de texto. Devuelve un valor que indica si las cadenas son iguales, o cuál es mayor o menor.

## Cómo funciona:
**Inicio**: Tienes dos competidores (cadenas de texto) y un número específico de rondas (caracteres a comparar).

**El Juez Imparcial**: strncmp empieza a comparar las cadenas carácter por carácter.

### Comparación de Rondas:

- Si encuentra una diferencia, decide inmediatamente cuál es mayor o menor.

- Si son iguales hasta el final de las rondas, dice que son iguales.

**Resultado**:

- *Devuelve 0 si las cadenas son iguales en los primeros n caracteres.*

- *Devuelve un valor positivo si la primera cadena es mayor.*

- *Devuelve un valor negativo si la segunda cadena es mayor.*

### Ejemplo:
**Cadena 1**: "Hola"

**Cadena 2**: "Holanda"

**Rondas (n)**: 4

**Comparación**: strncmp("Hola", "Holanda", 4)

## Proceso:
>El juez compara los primeros caracteres: 'H' con 'H'.

>Son iguales, pasa a los siguientes: 'o' con 'o'.

>Sigue siendo iguales: 'l' con 'l'.

>Aún iguales: 'a' con 'a'.

>Las primeras 4 rondas son iguales. Dice que las cadenas son iguales en los primeros 4 caracteres.

> *Devuelve 0.*

