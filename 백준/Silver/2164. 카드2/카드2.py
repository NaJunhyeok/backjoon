import sys
from collections import deque


n = int(sys.stdin.readline())
a = deque(range(1,n+1))
while len(a) != 1:
    a.popleft()
    a.rotate(-1)

print(a[0])