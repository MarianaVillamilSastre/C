import numpy as np
import scipy as sp
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D


datosx=np.genfromtxt("Esfera.txt",delimiter=",",usecols=(0))
datosy=np.genfromtxt("Esfera.txt",delimiter=",",usecols=(1))
datosz=np.genfromtxt("Esfera.txt",delimiter=",",usecols=(2))




fig=plt.figure(figsize=(10,10))
ax=fig.add_subplot(121,projection='3d')
ax.scatter(datosx,datosy,datosz,c='purple')
plt.title("Muestras aleatorias en una esfera", fontsize = 12)
plt.savefig("Esfera.pdf")
plt.close()


