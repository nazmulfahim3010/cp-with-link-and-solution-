t = int(input())

for _ in range(t):
    n =int(input())
    listy=list(map(int,input().split()))
    done=False
    for i in listy:
        if i ==67:
            print("YES")
            done=True
            break
    if not done:
        print("NO")