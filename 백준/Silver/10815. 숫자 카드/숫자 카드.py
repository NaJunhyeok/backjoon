import sys

n = int(sys.stdin.readline())
cards = list(map(int, sys.stdin.readline().split()))
m = int(sys.stdin.readline())
checks = list(map(int, sys.stdin.readline().split()))

dict = {}

for i in range(len(cards)):
    dict[cards[i]] = 0

for j in range(m):
    if checks[j] not in dict:
        print(0)
    else:
        print(1)