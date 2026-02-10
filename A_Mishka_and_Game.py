t = int(input())

mik = 0
cri = 0

for _ in range(t):
    m, c = map(int, input().split())
    if m > c:
        mik += 1
    elif c > m:
        cri += 1

if mik == cri:
    print("Friendship is magic!^^")
elif mik > cri:
    print("Mishka")
else:
    print("Chris")
