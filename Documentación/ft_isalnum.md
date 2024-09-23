**PROTOTIPO DE LA FUNCIÓN**

```int ft_isalnum(int c)```

**DESCRIPCIÓN**

*La función ft_isalnum verifica si el carácter proporcionado es alfanumérico. Esto significa que retorna 1 si el carácter es una letra (A-Z o a-z) o un dígito (0-9), y 0 en caso contrario.*

**PARÁMETRO**

 - C: *El valor ASCII del carácter que se evaluará. Aunque se recibe como un entero, este valor correspode a un carácter ASCII.*

 **VALOR DE RETORNO**

 - *Retorno 1 si el valor de 'c' es alfanumérico (es decir, si es una letra o un dígito).*

 - *Retorna 0 si no es ni una letra ni un dígito.*

**EJEMPLO DE USO**
´´´
#include <stdio.h>

int ft_isalnum(int c);

int main(void)
{
    char ch = '9';

    if(ft_isalnum(ch))
        printf("%c es alfanumérico\n", ch);
    else
        printf("%c no es alfanuméric\n", ch);
    
    return 0;
}
```

*EL CÓDIGO IMPRIMIRÁ*
``` 9 es alfanumérico ```
