# ISASCII 💻
## Pototipo de la función
```int	ft_isascii(int c)```

### Filosofemos ¿Qué es isascii? 🚬🌿
La función isascii es como un portero en el "Club ASCII". Este portero tiene la tarea de verificar si un carácter que quiere entrar pertenece al conjunto de caracteres ASCII estándar, que son aquellos con valores entre 0 y 127. Si el carácter está dentro de este rango, el portero dice "¡Sí, claro, pasa!", y isascii devuelve 1. Si no está dentro de este rango, el portero dice "Lo siento, colega, no puedes entrar aquí", y isascii devuelve 0.

### Ejemplo
. 'A' (valor ASCII 65) → isascii('A') → 1

. '9' (valor ASCII 57) → isascii('9') → 1

200 (valor ASCII fuera de rango) → isascii(200) → 0

##  PRUEBA UN MAIN 
```
int main() {
  char prueba = '9';
  if(isalnum(prueba))
      printf("Ok!");

return (0);
}
```
