import sys

input = sys.stdin.readline
n = int(input())

ar = []
for i in range(n):
    [a,b] = map(int,input().split())
    ar.append([a,b])

ar= sorted(ar)

for i in range(n):
    print(ar[i][0],ar[i][1])
