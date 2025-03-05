# Parcial1Lenguajes

Para ejecutar este archivo de prueba primero tenemos que tener flex instalado luego clonamos el repositorio.

Luego ejecutamos el siguiente comando.

```bash
flex Punto2.l
```

Esto nos generara el siguiente archivo.

```bash
lex.yy.c
```
Despues de haber generado el archivo realizamos el siguiente comando en la terminal.

```bash
gcc lex.yy.c -ll
```
Se generara el siguiente archivo.

```bash
a.out
```

Por ultimo ejecutamos el siguiente comando en la terminal para verificar nuestra prueba de test2.txt.

```bash
./a.out test2.txt
```

Si todo sale correcto nos deberia mostrar la siguiente informacion en la terminal.

```bash
ACEPTA
NO ACEPTA
```
