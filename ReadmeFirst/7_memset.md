# MEMSET 🎨
## Prototipo
```  void *memset(void *s, int c, size_t n); ```

### Filosofemos  🚬🌿
Piensa en memset como una brocha de pintura mágica que puede llenar una región de memoria con el 
mismo color, o en este caso, con el mismo valor.

**Qué hace memset?**
memset llena un bloque de memoria con un valor específico.

### Cómo funciona:
**Inicio**: Tienes un pedazo de memoria, imagina una fila de casilleros vacíos.

**La Brocha**: memset tiene una brocha de pintura y un valor específico (un número o carácter) con el que quiere llenar todos los casilleros.

**Pintar**: Va de casillero en casillero, llenándolos uno por uno con el mismo valor.

### Ejemplo:
- Memoria: [ _, _, _, _, _ ] (5 casilleros vacíos)

- Valor a llenar: 0

- Llamada a memset: memset(memoria, 0, 5)

**Proceso**:
>Llena el primer casillero: [ 0, _, _, _, _ ]

>Llena el segundo casillero: [ 0, 0, _, _, _ ]

>Llena el tercer casillero: [ 0, 0, 0, _, _ ]

>Llena el cuarto casillero: [ 0, 0, 0, 0, _ ]

>Llena el quinto casillero: [ 0, 0, 0, 0, 0 ]

**Resultado**:
*Todos los casilleros están llenos con el valor 0.*

### DALE UN MAIN
```
int main() {
  char arr[10];
  memset(arr, 'A', 10);
  whie (i < 10)
  {
    printf("arr[%d] = %c\n", i, arr);
    i++;
  }
return (0);
}
```
