

r,c=map(int,input().split())

listy=[]
s1="" #  ####
s2="" #  ...#
s3="" #  #...


for i in range(c):
    s1+='#'
    if i<c-1:
        s2+='.'
        
    else:
        s2+='#'

    if i==0:
        s3+='#'
        
    else:
        s3+='.'
        

# if r<=3:
#     x=r-2

#     switch = 0
#     for _ in range(x):
#         if switch==0:
#             listy.append(s2)
#         else:
#             listy.append(s3)
#         switch^=1
    
    
#     listy.append(s1)
# else:

listy.append(s1)
switch = 0
for _ in range(r-1):
    if switch==0:
        listy.append(s2)
        listy.append(s1)
    else:
        listy.append(s3)
        listy.append(s1)
    switch^=1

for i in range(r):
    print(listy[i])
