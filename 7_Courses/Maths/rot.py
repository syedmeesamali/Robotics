import numpy as np
import matplotlib.pyplot as plt

fig, ax = plt.subplots()
h = ax.plot(range(0,10), range(0,10))
ax.set_xlim([-10, 20])

def rotate(p, origin=(0,0), degrees = 0):
    angle = np.deg2rad(degrees)
    c, s = np.cos(angle), np.sin(angle)
    R = np.array(((c, -s),
                   s,  c))
    return R

points = [(1, 0), (0, 1)]
origin = (0, 0)
new_points = rotate(points, origin=origin, degrees=30)
plt.show()
print(new_points)