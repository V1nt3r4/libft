# STRLEN 📏
### Prototipo
``` size_t strlen(const char *s); ```

### Filosofemos
Imagina que strlen es una cinta métrica mágica para contar letras en una cadena de texto, ¿vale?.

### ¿Cómo funciona?

**Inicio**: Tienes una cadena de texto, como "Hola".

**Colocar la Cinta**: strlen coloca la cinta métrica en el primer carácter ('H').

**Recorrer la Cadena**: strlen avanza un carácter a la vez ('H', 'o', 'l', 'a') y cuenta cada uno.

**Parada**: Cuando llega al final de la cadena, donde está el carácter nulo '\0', se detiene.

###  Ejemplo

**Cadena: "Hola"**

**Proceso:**

>> Cuenta 'H' (1)
>> Cuenta 'o' (2
>> Cuenta 'l' (3)
>> Cuenta 'a' (4)
>> Encuentra '\0' y se detiene.
>>Resultado: La longitud de "Hola" es 4.

### PRUEBA UN MAIN
```
int main() {
  char str[] = "Hola!";
  int lengh = strlen(str)

  printf("La longitud de '%s' es: %d\n", str, length);
  return (0);
}
```
