import sys

n,k= map(int,sys.stdin.readline().split())

coins = list()

for i in range(n):
    coins.append(int(sys.stdin.readline()))
coins.sort(reverse=True)
ans = 0
for coin in coins:
    if k >= coin:
        ans = ans +(k // coin)
        k = k%coin
        if k == 0:
            break
print(ans)