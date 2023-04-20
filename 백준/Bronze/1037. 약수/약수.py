n = int(input())

arr = list(map(int, input().split()))
arr.sort()
if n>1:
    print(arr[0]*arr[-1])
else:
    print(arr[0]**2)