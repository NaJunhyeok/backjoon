import sys

input = sys.stdin.readline

x = int(input())
s = [64,32,16,8,4,2,1]
cnt = 0
for i in range(7):
    if x >= s[i]:
        cnt += 1
        x -= s[i]
    if x == 0:
        break

print(cnt)