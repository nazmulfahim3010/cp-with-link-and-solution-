t = int(input())

for _ in range(t):
    name=input().strip()
    countA=0
    countB=0

    for i in name:
        if i =='A':
            countA+=1
        else:
            countB+=1
    if countA>countB:
        print("A")
    else:
        print("B")