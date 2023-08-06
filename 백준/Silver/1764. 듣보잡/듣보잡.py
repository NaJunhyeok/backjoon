n,m = map(int,input().split())

S = set()
ans = 0
for i in range(n):
    S.add(input())

a = list()

for j in range(m):
    M = input()
    if M in S:
        ans += 1
        a.append(M)

print(len(a))

a = sorted(a)

for _ in range(len(a)):
    print(a[_])