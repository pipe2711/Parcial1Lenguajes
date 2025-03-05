%{
#include <stdio.h>
#include <stdlib.h>
%}

%%

^[a-zA-Z_][a-zA-Z0-9_]*[ \t]*=[ \t]*"lambda"[ \t]*[a-zA-Z_][a-zA-Z0-9_]*[ \t]*:.*$ {
    printf("ACEPTA\n");
}

^.*$ { printf("NO ACEPTA\n"); exit(0); } 

%%

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <archivo>\n", argv[0]);
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");
    if (!archivo) {
        printf("Error al abrir el archivo: %s\n", argv[1]);
        return 1;
    }

    yyin = archivo;
    yylex();  

    fclose(archivo);
    
    return 0;
}

int yywrap() { return 1; } 
