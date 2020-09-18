import numpy as np
import matplotlib.pyplot as plt

datax, datay = np.loadtxt("data.txt", unpack = True)

fig, ax = plt.subplots()
ax.plot(datax, datay, 'ro', label="Data")
ax.legend()
ax.set_xlabel("x")
ax.set_ylabel("P_2(x)")
ax.set_title("Unassociated Legendre polynomials of the degree 2")

fig.savefig("fig.pdf")