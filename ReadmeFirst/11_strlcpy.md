# STRLCPY 📋✍️🍴
## Prototipo
``` size_t ft_strlcpy(char *dst, const char *src, size_t size) ```

### Filosofemos
Piensa en strlcpy como un chef cuidadoso que transfiere los ingredientes de una receta a un nuevo cuaderno, asegurándose de no sobrescribir o desbordar nada.

**¿Qué hace strlcpy?**
strlcpy copia una cadena de caracteres desde un origen a un destino, asegurándose de que no se sobrepase el tamaño del destino y que siempre haya un carácter nulo ('\0') al final.

### Cómo funciona:
**Inicio**: Tienes dos cadenas de texto: una de origen con la receta completa y una de destino que puede que sea más pequeña.

**El Chef Cuidadoso**: strlcpy empieza a copiar los ingredientes (caracteres) de la receta desde el origen al destino.

**Chequeo del Tamaño**: El chef sabe cuántos caracteres puede copiar sin desbordar el cuaderno de destino.

**Escribir con Cuidado**: Va copiando carácter a carácter, y se asegura de que el último espacio en el destino sea un carácter nulo para marcar el final de la cadena.

### Ejemplo:
**Origen**: "Receta Secreta"

**Destino**: Espacio para 10 caracteres

### Proceso:
**Copiar**: El chef copia los primeros 9 caracteres del origen.

**Carácter Nulo**: Añade un carácter nulo ('\0') al final del destino.

**Resultado**:
*Destino: "Receta Se\0"*
