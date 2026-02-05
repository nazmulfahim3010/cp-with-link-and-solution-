
t = int(input())

for i in range(t):
    num = input()

    left = sum(int(num[i]) for i in range(3))
    right = sum (int(num[i]) for i in range(3,6))

    if left == right:
        print("YES")
    else:
        print("NO")

