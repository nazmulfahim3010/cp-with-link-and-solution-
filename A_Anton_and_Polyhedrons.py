t = int(input())

dict={
    "Tetrahedron":4,
    "Cube":6,
    "Octahedron":8,
    "Dodecahedron":12,
    "Icosahedron":20
}
result =0
for _ in range(t):
    name = input()
    result+=dict[name]

print(result)
