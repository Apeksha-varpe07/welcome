import numpy as np

A = np.array([1,2,3])
B = np.array([4,5,6])

# Reflection in XY-plane
A1 = [A[0], A[1], -A[2]]
B1 = [B[0], B[1], -B[2]]

print("Original Points:", A, B)
print("Reflected Points:", A1, B1)
