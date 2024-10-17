# STRRCHR
## Prototipo
``` char	*ft_strrchr(const char *s, int c) ```

## Filosofemos 
Piensa en strrchr como un buscador de tesoros que, en vez de comenzar desde el inicio del mapa, decide buscar desde el final. Su misión: encontrar la última aparición de un carácter específico en una cadena.

**¿Qué hace strrchr?**
strrchr busca un carácter específico dentro de una cadena de caracteres y devuelve un puntero a la última aparición de ese carácter. Si el carácter no se encuentra, devuelve NULL.

## Cómo funciona:
**Inicio**: Tienes un mapa del tesoro (cadena de texto) y un tesoro que buscas (un carácter específico).

**El Buscador de Tesoros al Revés**: strrchr empieza a recorrer el mapa desde el final, mirando cada lugar (carácter) en busca del tesoro.

## Encontrar el Tesoro:

- Si encuentra el carácter, te dice exactamente dónde está, pero desde la última aparición.

- Si recorre todo el mapa y no encuentra el carácter, te dice que el tesoro no está allí.

**Resultado**: *Devuelve la ubicación del tesoro (puntero al último carácter encontrado) o NULL si no lo encuentra.*

### Ejemplo:
**Mapa del Tesoro**: "Hola Mundo Hola"

**Tesoro**: 'o'

**Búsqueda**: strrchr("Hola Mundo Hola", 'o')

### Proceso:
>El buscador empieza en el último carácter: 'a'.

>No es el tesoro, sigue al anterior: 'l'.

>Sigue buscando: 'o' (¡Aquí está!).

>Devuelve la ubicación: puntero al segundo 'o' en la palabra "Hola".

**Resultado**:
*Retorna un puntero al carácter 'o' en la última aparición en la cadena "Hola Mundo Hola".*

