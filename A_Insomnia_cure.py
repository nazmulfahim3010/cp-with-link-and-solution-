k=int(input())
l=int(input())
m=int(input())
n=int(input())
d=int(input())
ans=0
for i in range(d+1):
    if i%k==0 or i%l==0 or i%m==0 or i%n==0:
        ans+=1
maxx = max(k,l,m,n,d)
if(maxx==d):
    print(ans)
elif maxx==k:
    print(ans-1)
else :
    print(ans+1)