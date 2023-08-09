import sys

n, k = map(int,sys.stdin.readline().split())

nums = list(map(int,sys.stdin.readline().split()))
sums = [0]
for num in nums:
    elem = num + sums[-1]
    sums.append(elem)

for _ in range(k):
    i, j = map(int,sys.stdin.readline().split())
    ans = sums[j]-sums[i-1]

    print(ans)