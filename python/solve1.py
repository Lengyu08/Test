import math
g = 9.807
pi = 3.142
h = 41.46 / 100
t = 1.336
r = 4.392 / 100
R = 9.15 / 100
m0 = 1.05
j1 = (g * R * r * m0 * t * t) / (4 * pi * pi * h)
print(j1)
j2 = m0 * R * R / 2
print(j2)