**PROTOTIPO DE FUNCIÓN**

``` int ft_isascii(int c) ```

**DESCRIPCIÓN**

 *La función ft_isascii verifica si el valor proporcionado es un carácter ASCII. Retorna 1 si el valor de c está dentro del rango de caracteres ASCII estándar (0 a 127), y 0 en caso contrario.*

 **PARÁMETRO**

  - C: *El valor entero que se evaluará. Este valor normalmente representa el código ASCII de un carácter, pero puede ser cualquier valor entero.*

  **VALOR DE RETORNO**

   - *Retorna 1 si el valor de 'c' está en el rango de caracteres ASCII (de 0 a 127).*

   - *Retorna 0 si el valor de 'c' no pertenece a este rango.*

**EJEMPLO DE USO**
´´´
#include <stdio.h>

int ft_isascii(int c);
{
    char ch = 'A';

    if(ft_isascii(ch))
        printf("%c está en el rango ASCII\n", ch);
    else
        printf("%c no está en el rango ASCII\n", ch)

    return 0;
}

```