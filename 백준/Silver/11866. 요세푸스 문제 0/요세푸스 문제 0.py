import sys

from collections import deque

n,k = map(int,sys.stdin.readline().split())


a = deque(range(1,n+1))
b = []

while len(a) != 0:
    a.rotate(-k)
    b.append(str(a.pop()))

print('<'+', '.join(b)+'>')
