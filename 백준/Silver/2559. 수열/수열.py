import sys


n,k = map(int,sys.stdin.readline().split())

arr = list(map(int,sys.stdin.readline().split()))

arr2 = []
arr2.append(sum(arr[:k]))
for i in range(n-k):
    arr2.append(arr2[i]-arr[i]+arr[k+i])

print(max(arr2))