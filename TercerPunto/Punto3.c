#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <archivo> <palabra>\n", argv[0]);
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");
    if (!archivo) {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    char palabra[100];
    char linea[1000];
    int contador = 0;

    while (fgets(linea, 1000, archivo)) {
        for (int i = 0; linea[i]; i++) {
            int j = 0;
            while (linea[i] && linea[i] != ' ' && linea[i] != '\n') {
                palabra[j++] = linea[i++];
            }
            palabra[j] = '\0';
            
            if (j > 0) {
                int igual = 1;
                for (int k = 0; argv[2][k]; k++) {
                    if (palabra[k] != argv[2][k]) {
                        igual = 0;
                        break;
                    }
                }
                if (igual && !argv[2][j]) contador++;
            }
        }
    }

    printf("La palabra '%s' se repite %d veces\n", argv[2], contador);
    fclose(archivo);
    return 0;
} 