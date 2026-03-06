nums = list(map(int, input().split()))
nums.sort()

S = nums[3]

a = S - nums[2]
b = S - nums[1]
c = S - nums[0]

print(a, b, c)
