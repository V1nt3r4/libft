# STRLCAT
## Prototipo
``` size_t	ft_strlcat(char *dest, char *src, size_t size) ```

### Filosofemos
Imagina que strlcat es como un chef mezclando ingredientes de dos recetas diferentes, asegurándose de que todo quepa perfectamente en un cuenco grande sin derramarse.

**¿Qué hace strlcat?**
strlcat combina dos cadenas de caracteres: une una cadena de destino con una cadena de origen, pero se asegura de que no sobrepase el tamaño del destino y que siempre haya un carácter nulo ('\0') al final.

## Cómo funciona:
**Inicio**: Tienes dos cadenas de texto: una de destino que ya tiene algo escrito y una de origen con nuevos ingredientes que quieres añadir.

**El Chef Mezclador**: strlcat empieza a copiar los ingredientes (caracteres) de la cadena de origen al final de la cadena de destino.

**Chequeo del Tamaño**: El chef sabe cuánto espacio tiene en el cuenco (destino) para asegurarse de no derramar nada.

**Mezclar con Cuidado**: Va copiando carácter a carácter, y se asegura de que el último espacio en el destino sea un carácter nulo para marcar el final de la cadena.

### Ejemplo:
**Destino**: "Hola"

**Origen**: " Mundo"

**Espacio total en destino**: 11

### Proceso:
>Mezclar: El chef empieza a añadir caracteres del origen al final del destino:

>Copia ' ' (espacio): "Hola "

>Copia 'M': "Hola M"

>Copia 'u': "Hola Mu"

>Copia 'n': "Hola Mun"

>Copia 'd': "Hola Mund"

>Copia 'o': "Hola Mundo"

>Carácter Nulo: Añade un carácter nulo ('\0') al final del destino.

**Resultado**:
*Destino: "Hola Mundo\0"*
