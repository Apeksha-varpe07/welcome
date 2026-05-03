from sympy import Polygon

p = Polygon((1,2), (4,2), (4,4), (2,5))

print("Area:", p.area)
print("Centroid:", p.centroid)
