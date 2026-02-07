t = int(input())
for _ in range(t):
    n = int(input())

    listy = list(map(int,input().split()))
    l=[]
    sety = set(listy)
    for i in sety:
        l.append(i)
    count1=[0,0]
    count2=[0,0]
  
    for i in range(len(listy)):
        if listy[i] == l[0]:
            count1[0]+=1
            count1[1]=i
        else:
            count2[0]+=1
            count2[1]=i

        
    if count1[0]==1:
        print(count1[1]+1)
    elif count2[0]==1:
        print(count2[1]+1)
        