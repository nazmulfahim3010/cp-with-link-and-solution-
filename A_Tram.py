t = int(input())

result =0
for i in range(t):
    ai,bi=map(int,input().split())
    if i==0:
        p_res=bi
    else:
        p_res=p_res-ai
        p_res+=bi

    result=max(result,p_res)

print(result)