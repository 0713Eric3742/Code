import numpy as np
import matplotlib.pyplot as plt
x = range(0, 10)
x_min = -10.0
x_max = 10.0
x = np.arange(x_min, x_max, .01)
y = np.exp(x)
plt.plot(x, y)
plt.xlim(x_min, x_max)
plt.ylim(-10, 10)
plt.grid(True, which="both", linestyle='--')
plt.show()
plt.close()
