import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("g++ Ejercicio.cpp -o Ejercicio.x")
a = os.system("./Ejercicio.x > Ejercicio.dat")

plt.figure()
datos = np.loadtxt("Ejercicio.dat")
plt.hist(datos[0:], bins=70)
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("Histograma.png")

