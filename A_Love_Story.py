t = int( input())

for _ in range(t):
    x = input()
    y ="codeforces"
    count =0 
    for i,j in zip(x,y):
        if i !=j:
            count+=1

    print(count)