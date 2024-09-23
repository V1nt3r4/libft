**PROTIPO DE LA FUNCIÓN**

```int ft_isalpha(int c)```

**DESCRIPCIÓN**

*La función ft_isalpha toma un entero que presenta el valor ASCII de un caracter.
Retorna 1 si el carácter pasado es una letra (tanto mayúscula como minúscula) y 
0 en caso contrario.*

**PARÁMETRO**

C:*Es el carácter que se evaluará. Aunque se recibe como un entero, lo normal
es que este valor se corresponda con un valor ASCII de un carácter.*

**VALOR DE RETORNO**

-- Retorna 1 *si el valor de 'c' corresponde a una letra alfabética 
(es decir, una letra entre 'A' y 'Z' o entre 'a' y 'z').*
-- Retorna 0 *en cualquier otro caso*

**USO COMÚN**

*Esta función es útil cuando se necesita validar si un carácter es una letra,
especialmente en proyectos que involucren manipulación de cadenas de texto o en
validaciones de entrada.*

**EJEMPLO DE USO**
```
#include <stdio.h>
int ft_isalpha(int c);

int main() {
  char ch = 'A';
  if(ft_isalpha(ch))
    printf("%c es una letra\n", ch);
  else
    printf("%c no es una letra\n", ch);

  return 0;
}
```





