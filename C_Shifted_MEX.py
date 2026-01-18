import sys

input = sys.stdin.read
data = input().split()

t = int(data[0])
idx = 1

for _ in range(t):
    n = int(data[idx])
    idx += 1
    a = list(map(int, data[idx:idx+n]))
    idx += n

    ans = 0

    for v in a:
        s = set()
        for x in a:
            y = x - v
            if y >= 0:
                s.add(y)

        mex = 0
        while mex in s:
            mex += 1

        ans = max(ans, mex)

    print(ans)