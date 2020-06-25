import numpy as np
import scipy as sp
import matplotlib.pyplot as plt

datos=np.genfromtxt("datos.dat")
x=np.linspace(-2,2,1000)

datos1=datos[:,0]
datos2=datos[:,1]

plt.plot(x,datos1,c="purple")
plt.plot(x,datos2,c="blue")
plt.title("Ecuacion de adveccion")
plt.savefig("graficas.pdf")
plt.close()
