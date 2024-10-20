# SUBSTR 

## Prototipo:
``` char *ft_substr(char const *s, unsigned int start, size_t len); ```

## Filosofemos 🚬🌿
 imagínate que tienes una cadena de texto, algo así como una frase entera. Ahora, la función ft_substr es como esos recortadores de papel que cortan pedazos específicos.

**¿Qué hace esto?**
Esta función agarra una cadena de texto (tu frase completa) y, usando tijeras invisibles, corta un pedazo de esa cadena. Empieza a cortar desde un punto que le dices (índice start) y corta hasta una longitud específica (len). ¡No más, no menos!

## Cómo funciona:
**Inicio**: Tienes una cadena de texto larga (tu libro), y quieres extraer una parte de ella.

**El Bibliotecario Mágico**: ft_substr toma nota de dónde empezar a arrancar las páginas (start) y cuántas páginas necesitas (len).

**Arrancar Páginas**: ft_substr recorta desde el punto de inicio y te entrega el pedazo exacto que pediste. Si algo sale mal y no tiene suficiente papel, te devuelve nada (NULL).

Ejemplo:
**Cadena Original**: "Hola, soy una cadena de texto superlarga."

**Inicio**: 7

**Longitud**: 6

## Proceso:
>Encuentra el punto de inicio (start): "Hola, soy una cadena de texto superlarga."

>Cuenta el número de caracteres según len: "soy una cadena de texto superlarga."

>Te devuelve la substring: "soy un"

**Resultdo**
*La substring resultante contiene exactamente la sección deseada: "soy un"*

>[!TIP]
> PRUEBA UN MAIN
```
int main() {
    char            str[] = "Hola, soy una cadena de texto larga"
    unsigned int    start = 7;
    size_t          len = 6;

    char    *substring = ft_substr(str, start, len);

    if(substring)
        printf("La substring es: %s\n", substring);
        free(substring);
    else
        printf("Error al crear la subcadena\n");

    return 0;
}
```
