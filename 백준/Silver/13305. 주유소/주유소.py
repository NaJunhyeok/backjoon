import sys

n = int(sys.stdin.readline())

km = list(map(int,sys.stdin.readline().split()))

li = list(map(int,sys.stdin.readline().split()))
min = li[0]
ans = 0
for i in range(n-1):
    if min > li[i]:
        min = li[i]
    ans += min * km[i]

print(ans)
