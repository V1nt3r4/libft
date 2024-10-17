# STRCHR
## Prototipo
``` char	*ft_strchr(const char *s, int c) ```

## Filosofemos 
Piensa en strchr como un buscador de tesoros en un mapa de caracteres. Su misión es encontrar la primera aparición de un carácter específico en una cadena y decirte dónde está escondido.

**¿Qué hace strchr?**
strchr busca un carácter específico dentro de una cadena de caracteres y devuelve un puntero a la primera aparición de ese carácter. Si el carácter no se encuentra, devuelve NULL.

## Cómo funciona:
**Inicio**: Tienes un mapa del tesoro (cadena de texto) y un tesoro que buscas (un carácter específico).

**El Buscador de Tesoros**: strchr empieza a recorrer el mapa desde el principio, mirando cada lugar (carácter) en busca del tesoro.

### Encontrar el Tesoro:

- Si encuentra el carácter, te dice exactamente dónde está.

- Si recorre todo el mapa y no encuentra el carácter, te dice que el tesoro no está allí.

**Resultado**: *Devuelve la ubicación del tesoro (puntero al primer carácter encontrado) o NULL si no lo encuentra.*

### Ejemplo:
**Mapa del Tesoro**: "Hola Mundo"

**Tesoro**: 'M'

**Búsqueda**: strchr("Hola Mundo", 'M')

### Proceso:
>El buscador empieza en el primer carácter: 'H'.

>No es el tesoro, sigue al siguiente: 'o'.

>Sigue buscando: 'l', 'a', ' '.

>Encuentra el tesoro: 'M'.

>Devuelve la ubicación: puntero a 'M' en la cadena.

**Resultado**:
*Retorna un puntero al carácter 'M' en la cadena "Hola Mundo".*
