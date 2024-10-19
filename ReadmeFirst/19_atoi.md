# ATOI 🔢✨🔣
## Prototipoo de la función
``` int	ft_atoi(const char *nptr) ```

## Filosofemos 🚬🌿
Imagina que atoi es como un mago que puede convertir palabras mágicas (cadenas de texto) en números reales. Aquí va la explicación para que lo entiendas de manera relajada:

**¿Qué hace atoi?**
atoi toma una cadena de caracteres que representa un número y la convierte en un entero.

## Cómo funciona:
**Inicio**: Tienes una palabra mágica (cadena de texto), como "1234".

**El Mago Transformador**: atoi empieza a mirar cada carácter de la cadena y pregunta: "¿Eres un número?"

### Transformación:

- Si el carácter es un número ('0' a '9'), lo convierte en el dígito correspondiente y lo añade al número entero que está construyendo.

- Si el primer carácter es un signo ('+' o '-'), decide si el número será positivo o negativo.

- Ignora espacios en blanco al principio y se detiene al encontrar un carácter no numérico.

**Resultado**: *Devuelve el número entero construido a partir de la cadena.*

### Ejemplo:
**Cadena**: " -1234abc"

**Proceso**: atoi(" -1234abc")

## Proceso:
>Ignora los espacios en blanco al principio: " -1234abc"

>Encuentra el signo '-' y decide que el número será negativo.

>Mira el primer número: '1', y empieza a construir el número: 1

>Añade el siguiente número: '2', el número ahora es 12

>Añade el siguiente número: '3', el número ahora es 123

>Añade el siguiente número: '4', el número ahora es 1234

>Encuentra una letra 'a' y se detiene.

>Aplica el signo negativo: -1234

**Devuelve**: *-1234*

>[!TIP]
> PRUEBA UN MAIN
```
int main() {
	char	str[] =  "   -1234abc";
	int		result = ft_atoi(str);

	printf("La cadena '%s' se convierte en el valor %d\n", str, result);
	return (0);
}
```
