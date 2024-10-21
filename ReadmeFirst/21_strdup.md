# STRDUP 📄✨📃
## Prototipo
``` char	*ft_strdup(const char *s) ```
## Filosofemos 🚬🌿
magina que strdup es como una fotocopiadora mágica para cadenas de texto. Tienes una página con algo escrito y necesitas hacer una copia exacta de esa página.

**¿Qué hace strdup?**
strdup toma una cadena de caracteres y crea una copia exacta en una nueva ubicación de memoria. La nueva cadena es idéntica a la original, pero independiente.

## Cómo funciona:
**Inicio**: Tienes una página (cadena de texto) que quieres copiar, como "Hola Mundo".

**La Fotocopiadora Mágica**: strdup coloca la página en la fotocopiadora.

### Hacer la Copia:

- La fotocopiadora mide la longitud de la página original para saber cuánta memoria necesita.

- Asigna memoria suficiente para la copia.

- Copia cada carácter de la página original a la nueva página.

**Resultado**: *Devuelve un puntero a la nueva página (la copia exacta de la cadena original).*

### Ejemplo:
**Página Original**: "Hola Mundo"

**Copia**: strdup("Hola Mundo")

## Proceso:
>La fotocopiadora mide la longitud: "Finis Mundi" tiene 11 caracteres (incluyendo el carácter nulo al final).

>Asigna suficiente memoria para 10 caracteres.

>Copia cada carácter: 'F', 'i', 'n', 'i', 's',' ', 'M', 'u', 'n', 'd', 'i', '\0'.

**Devuelve un puntero a la nueva cadena**: *"Hola Mundo".*

>[!TIP]
> PRUEBA UN MAIN
```
int main() {
	char	str[] = "Finis Mundi";
	char	*copy = ft_strdup(str);
	
	printf("%s\n", copy);
	return (0);
}
```
