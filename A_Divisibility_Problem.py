# t = int(input())
# for _ in range(t):
#     n =0
#     a,b =map(int,input().split())
#     while True:
#         if a%b == 0:
#             break
#         else:
#             a+=1
#             n+=1
#     print(n)

t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    print((b - a % b) % b)

