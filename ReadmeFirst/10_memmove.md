# MEMMOVE 🔄📦🛠️
## Prototipo
``` void *ft_memmove(void *dest, const void *src, size_t n) ```

## Filosofemos 🚬🌿
Piensa en memmove como un grupo de amigos ayudando a mover cosas de un casillero a otro, pero con mucho cuidado de no pisarse los dedos. 
memmove es especial porque puede manejar situaciones donde los casilleros de origen y destino se solapan.

**¿Qué hace memmove?***
memmove copia una cantidad específica de datos desde un área de memoria (origen) a otra (destino), y lo hace con mucho cuidado si hay solapamiento entre las dos áreas.

## Cómo funciona:
**Inicio**: Tienes dos casilleros de memoria: uno de origen (donde están tus cosas) y otro de destino (donde quieres copiar esas cosas).

**El Encargado Cuidadoso de la Mudanza**: memmove toma nota de cuántas cosas (bytes) necesitas mover y verifica si el origen y el destino se solapan.

**Mover las Cosas Cuidadosamente**: Si hay solapamiento, memmove decide si debe copiar las cosas de adelante hacia atrás o de atrás hacia adelante para evitar pisarse los dedos y asegurarse de que todo se copie correctamente.

### Ejemplo:
**Origen**: [ A, B, C, D, E ]

**Destino**: [ _, _, _, _, _ ]

**Cantidad a copiar**: 5 bytes

### Proceso:
**Sin Solapamiento**: (esto me recuerda a otra función... memcpy?)
>Copia el primer byte: [ A, _, _, _, _ ]

>Copia el segundo byte: [ A, B, _, _, _ ]

>Copia el tercer byte: [ A, B, C, _, _ ]

>Copia el cuarto byte: [ A, B, C, D, _ ]

>Copia el quinto byte: [ A, B, C, D, E ]

**Con Solapamiento** (Ejemplo: Origen y Destino se solapan parcialmente):
>Origen: [ A, B, C, D, E ]

>Destino: [ _, A, B, C, _ ]

>Cantidad a copiar: 4 bytes

*Proceso desde atrás hacia adelante*:

>Copia el cuarto byte: [ _, A, B, C, D ]

>Copia el tercer byte: [ _, A, B, B, D ]

>Copia el segundo byte: [ _, A, A, B, D ]

>Copia el primer byte: [ _, _, A, B, D ]

**Resultado**:
*El destino ahora tiene una copia exacta del origen: [ A, B, C, D, E ] o maneja el solapamiento correctamente.*

>[!TIP]
> PRUEBA UN MAIN (con solapamiento, sino es un memcpy)
```
int main() {
char	buffer[20] = "OverloapExample";
char	*src = buffer + 5;
char	*dst = buffer + 2;
	
memmove(dst, src, 10);

printf("%s", buffer);

return (0); 
}
``` 
