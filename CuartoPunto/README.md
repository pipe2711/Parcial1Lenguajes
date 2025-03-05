# Parcial1Lenguajes

Para este punto lo que haremos es una breve comparacion entre dos lenguajes Python y C donde se mirara el tiempo de ejecucion que se tomara uno y otro haciendo una sucesion simple de Fibonacci.

Antes tendremos que tener los dos lenguajes instalados tanto C como Python y luego de eso realizaremos los siguientes comandos.

#Para C

```bash
gcc Programa.c -o Programa
./Programa
```

#Para Python
```bash
python3 Programa.py
```

Si todo sale correcto nos deberia mostrar la siguiente informacion en la terminal.

```bash
n_fibonacci = [40, 45, 48]  # Números de Fibonacci probados
tiempos_python = [0.7, 87.3, 102.5]  # Tiempos de Python
tiempos_c = [0.46, 4.86, 20.51]  # Tiempos de C
```

Podemos observar que en C se demora menos que en Python ya que uno es compilado y el otro es interpretado.
