t = int(input())

for _ in range(t):
    x, y = input().split()

    x_new = y[0] + x[1:]
    y_new = x[0] + y[1:]

    print(x_new, y_new)
