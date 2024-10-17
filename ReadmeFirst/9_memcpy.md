# MEMCPY 📦
## Prototipo
```void *ft_memcpy(void *dest, const void *src, size_t n) ```
### Filosofemos
Imagina que memcpy es como un grupo de amigos ayudando a mover cosas de un casillero a otro. 
Tienes un montón de cosas en el casillero de origen, y quieres copiarlas exactamente en el casillero de destino.

**¿Qué hace memcpy?**
memcpy copia una cantidad específica de datos desde un área de memoria (origen) a otra (destino).

## Cómo funciona:
**Inicio**: Tienes dos casilleros de memoria: uno de origen (donde están tus cosas) y otro de destino (donde quieres copiar esas cosas).

**El Encargado de la Mudanza**: memcpy toma nota de cuántas cosas (bytes) necesitas mover.

**Mover las Cosas**: memcpy empieza en el primer casillero del origen y copia las cosas al primer casillero del destino, y sigue así uno por uno hasta que todas las cosas se hayan copiado.

### Ejemplo:
**Origen***: [ A, B, C, D, E ]

**Destino**: [ _, _, _, _, _ ]

**Cantidad a copiar**: 5 bytes

### Proceso:
>Copia el primer byte: [ A, _, _, _, _ ]

>Copia el segundo byte: [ A, B, _, _, _ ]

>Copia el tercer byte: [ A, B, C, _, _ ]

>Copia el cuarto byte: [ A, B, C, D, _ ]

>Copia el quinto byte: [ A, B, C, D, E ]

**Resultado**:
*El destino ahora tiene una copia exacta del origen: [ A, B, C, D, E ].*

### PRRUEBA ESTE MAIN
```
int main() {
char src[] = "Cómo están los máquinas";
char dest[50];
int		i = 0;
ft_memcpy (dest, src, strlen(src));
while (i < strlen(dest)){printf("%c", dest[i]), i++;}
return (0);
}
```
