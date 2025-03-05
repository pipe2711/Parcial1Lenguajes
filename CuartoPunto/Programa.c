#include <stdio.h>
#include <time.h>

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n = 48;
    clock_t inicio = clock();
    
    int resultado = fib(n);
    
    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    
    printf("Fibonacci(%d) = %d\n", n, resultado);
    printf("Tiempo en C: %f segundos\n", tiempo);
    return 0;
}