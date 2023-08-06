import sys
a = []
n = int(sys.stdin.readline())

for _ in range(n):

    command = sys.stdin.readline().split()

    if command[0] == '1':
        a.append(command[1])
    elif command[0] == '2':
        if a:
            print(a.pop())
        else:
            print('-1')
    elif command[0] == '3':
        print(len(a))
    elif command[0] == '4':
        if a:
            print('0')
        else:
            print('1')
    elif command[0] == '5':
        if a:
            print(a[-1])
        else:
            print('-1')