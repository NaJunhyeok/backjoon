import sys
n = int(sys.stdin.readline())
cards = list(map(int, sys.stdin.readline().split()))
m = int(sys.stdin.readline())
checks = list(map(int, sys.stdin.readline().split()))

dict = {}

for i in cards:
    if i in dict:
        dict[i] += 1
    else:
        dict[i] = 1

for i in checks:
    if i in dict:
        print(dict[i],end=' ')
    else:
        print(0, end = ' ')