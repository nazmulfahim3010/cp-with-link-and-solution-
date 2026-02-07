t = int(input())
listy= list(map(int,input().split()))

maxi = max(listy)
total =0

for i in range(t):
    total+=maxi-listy[i]

print(total)