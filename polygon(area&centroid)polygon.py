from sympy import Polygon

p = Polygon((-2,5), (-2,9), (3,5), (4,2))

print("Area:", p.area)
print("Centroid:", p.centroid)
