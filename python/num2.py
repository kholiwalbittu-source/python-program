import numpy as np

# create an array
a = np.array([10,20,30,40,50,60,70,80,90,100,110,120,130,140,150])

print("original:", a)

#1. first three elements 
print("first three elements:", a[0:3])

#2. elements from index 2 to 4
print("index 2 to 4:", a[2:5])

#3. element from index 0 to 6
print("element 0 to 6:", a[0:6])

#4.end ten elements 
print("end ten elements:", a[5:])

#5. elements from index 2 to 3
print("elements 2 to 3:", a[2::3])

#6. elements from index 0 to 12 to 2
print("elements 0 to 12 to 2:", a[:12:2])

#7. elements form index 0 to -1
print("elements 0 to -1:", a[::-1])