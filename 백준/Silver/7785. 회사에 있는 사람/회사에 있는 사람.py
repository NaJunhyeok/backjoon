n = int(input())

G = dict()

for _ in range(n):
    a,b = input().split()
    G[a] = b
a = list()
for key, value in G.items():
    if value == 'enter':
        a.append(key)
a = sorted(a,reverse = True)

for _ in range(len(a)):
    print(a[_])