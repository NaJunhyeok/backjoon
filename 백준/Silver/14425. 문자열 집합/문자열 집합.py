n,m = map(int,input().split())

S = set()
ans = 0
for i in range(n):
    S.add(input())

for j in range(m):
    M = input()
    if M in S:
        ans += 1
print(ans)