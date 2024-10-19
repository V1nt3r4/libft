# STRNSTR 🔍🔎📖
## Prototipo
``` char	*ft_strnstr(const char *big, const char *little, size_t len) ```

## Filosofemos 🚬🌿
Imagina que strnstr es como un detective con una lupa mágica que solo puede buscar en una parte específica del libro. Este detective busca una frase dentro de una sección limitada del libro.

**Cómo funciona**:
**Inicio**: Tienes un libro (cadena de texto) y una pista (subcadena) que quieres encontrar, pero solo puedes buscar en un número limitado de páginas (primeros n caracteres).

**El Detective con Lupa**: strnstr empieza a leer el libro desde el principio, pero solo mira los primeros n caracteres en busca de la pista.

### Encontrar la Pista:

- Si encuentra la subcadena en esa sección, te dice exactamente dónde empieza.

- Si recorre toda la sección permitida y no encuentra la subcadena, te dice que la pista no está allí.

**Resultado**: *Devuelve la ubicación de la pista (puntero al primer carácter de la subcadena encontrada) o NULL si no la encuentra dentro de la sección limitada.*

### Ejemplo:
**Libro**: "Hola Mundo"

**Pista**: "Mun"

**Sección**: los primeros 9 caracteres (n = 9)

**Búsqueda**: strnstr("Hola Mundo", "Mun", 9)

## Proceso:
>El detective empieza en el primer carácter de la sección: 'H'.

>No es la pista, sigue al siguiente: 'o'.

>Sigue buscando hasta llegar a 'M' en "Mundo".

>Encuentra la pista: "Mun".

>Devuelve la ubicación: puntero a "Mun" en la cadena "Hola Mundo" dentro de los primeros 9 caracteres.

**Resultado**:
*Retorna un puntero al inicio de la subcadena "Mun" en la cadena "Hola Mundo" dentro de los primeros 9 caracteres.*

>[!TIP]
> PRUEBA UN MAIN
```
int main() {
	char	str[] = "Hola Mundo";
	char	sub[] = "Mun";
	size_t	n = '9';
	char	*result = ft_strnstr(str, sub, 9);

	if(result)
		printf("La subcadena '%s' se encontró en la posición: %ld\n", sub, result - str);
	else
		printf("No se encontró");

	return (0);
}
```
