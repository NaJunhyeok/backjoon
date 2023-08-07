import sys
from collections import deque

a = deque()
n = int(sys.stdin.readline())

for _ in range(n):
    com = sys.stdin.readline().split()

    if com[0] == 'push':
        a.append(com[1])
    elif com[0] == 'pop':
        if len(a)>0:
            print(a.popleft())
        else:
            print('-1')
    elif com[0] == 'size':
        print(len(a))
    elif com[0] == 'empty':
        if len(a)>0:
            print('0')
        else:
            print('1')
    elif com[0] == 'front':
        if len(a)>0:
            print(a[0])
        else:
            print('-1')
    elif com[0] == 'back':
        if len(a)>0:
            print(a[-1])
        else:
            print('-1')