l=[]
n=int(input())
count=0
x=''
y=''
for i in range(n):
    x=input()
    if x!=y:
        count+=1
        y=x

print(count)