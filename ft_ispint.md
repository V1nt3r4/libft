**PROPOTIPO DE FUNCIÓN**

``` int ft_isprint(int c) ```

**DESCRIPCIÓN**

*La función ft_isprint verifica si el valor proporcionado es un caracter imprimible. Retorna 1 si el carácter es imprimible, es decir, si pertenece al conjunto de caracteres ASCII imprimibles (que van desde el espacio ' ' de valor 32 hasta el caracter ~ de valor 126). Retorna 0 en caso contrario.*

**PARÁMETRO**

 - C: *El valor entero que se evaluará. Este valor representa típicamente un carácter ASCII, pero puede ser cualquier entero.*

 **VALOR DE RETORNO**

  - Retorna 1 si el valor de c está en el rango de caracteres ASCII imprimibles (32 a 126).

  - Retorna 0 si el valor de 'c' no está en este rango.

**EJEMPLO DE USO**

``` 
#include <stdio.h>

int ft_isprint(int c);

int main(void)
{
  char ch = 'A';

  if(ft_iprintf(ch))
    printf("%c es un carácter imprimible\n", ch);
  else
    printf("%c no es un carácter imprimible\n", ch);

  return 0;
}
```

*Este código imprimirá:*

``` A es un caracter imprimible ``` 