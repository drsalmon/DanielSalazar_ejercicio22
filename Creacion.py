import os
import numpy as np
import matplotlib.pyplot as plt


B = os.system("g++ Ejercicio.cpp -o Ejercicio.x")
B = os.system("./Ejercicio.x > Ejercicio.dat")

plt.figure()
datos = np.loadtxt("Ejercicio.dat")
plt.hist(datos[0:], bins=70, density=False)
plt.xlabel('Valor de X')
plt.title('Histrograma Metopolis Hastings')
plt.ylabel('# Iteraciones')
plt.grid()
plt.savefig("Histograma.png")


