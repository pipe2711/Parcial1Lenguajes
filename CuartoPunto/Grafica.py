import matplotlib.pyplot as plt

n_fibonacci = [40, 45, 48]  # Números de Fibonacci probados
tiempos_python = [0.7, 87.3, 102.5]  # Tiempos de Python
tiempos_c = [0.46, 4.86, 20.51]  # Tiempos de C


plt.figure(figsize=(10, 6))


plt.plot(n_fibonacci, tiempos_python, 'ro-', label='Python', linewidth=2)
plt.plot(n_fibonacci, tiempos_c, 'bo-', label='C', linewidth=2)


plt.title('Comparación de Rendimiento: Fibonacci', fontsize=14)
plt.xlabel('n-ésimo número de Fibonacci', fontsize=12)
plt.ylabel('Tiempo de ejecución (segundos)', fontsize=12)
plt.grid(True, linestyle='--', alpha=0.7)
plt.legend(fontsize=10)


plt.yscale('log')


plt.show()