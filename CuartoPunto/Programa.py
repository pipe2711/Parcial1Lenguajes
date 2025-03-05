import time

def fib(n):
    if n <= 1:
        return n
    return fib(n-1) + fib(n-2)

n = 48
inicio = time.time()

resultado = fib(n)

fin = time.time()
print(f"Fibonacci({n}) = {resultado}")
print(f"Tiempo en Python: {fin - inicio} segundos")