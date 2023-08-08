import sys

from collections import deque

n = int(sys.stdin.readline())
a = deque()
for _ in range(n):
    com = sys.stdin.readline().split()

    if com[0] == '1':
        a.appendleft(com[1])
    elif com[0] == '2':
        a.append(com[1])
    elif com[0] == '3':
        if len(a)>0:
            print(a.popleft())
        else:
            print('-1')
    elif com[0] == '4':
        if len(a) > 0:
            print(a.pop())
        else:
            print('-1')
    elif com[0] == '5':
        print(len(a))
    elif com[0] == '6':
        if len(a):
            print('0')
        else:
            print('1')
    elif com[0] == '7':
        if len(a):
            print(a[0])
        else:
            print('-1')
    elif com[0] == '8':
        if len(a):
            print(a[-1])
        else:
            print('-1')