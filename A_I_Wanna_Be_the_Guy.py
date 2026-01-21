t = int(input())
listy=[]
is_done =True
x=list(map(int,input().split()))
y=list(map(int,input().split()))
x.sort()
y.sort()
for i in range(t):
    listy.append([i+1,False])
listy.sort()
for xi in x:
    for e in listy:
        if e[0]==xi and e[1]==False:
            e[1]=True
for yi in y:
    for e in listy:
        if e[0]==yi and e[1]==False:
            e[1]=True

for e in listy:
    if e[1]==False:
        is_done = False
        break
if is_done:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")